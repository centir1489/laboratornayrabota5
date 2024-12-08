#pragma once
#ifndef BUILD_REPORTS
#define BUILD_REPORTS
#include <iostream>
#include <fstream>
#include <vector>
#include <memory>
#include<filesystem>
#include <stdexcept> // std::invalid_argument
#include"parserfunct.h"

namespace fs = std::filesystem;


const fs::path PATH_SAVE_REPORTS = "/home/lendell/Документы/Университет/2Курс/Семестр3/1. Программирование/repa/lab5/reports";

const fs::path PATH_CARTIN = "/home/lendell/Документы/Университет/2Курс/Семестр3/1. Программирование/repa/lab5/picture";


// HTML-элементы
class HtmlElement {
public:
    virtual std::string render() const = 0;
    virtual ~HtmlElement() = default;
};

class HtmlHeader : public HtmlElement{ // заголовок
private:
    std::string text;
    size_t level;
    bool isCentried;

public:
    HtmlHeader(const std::string& text, size_t level, bool isCentried = false) : text(text), level(level), isCentried(isCentried) {
        if(level < 1 || level > 6){
            throw std::invalid_argument("Уровень заголовка должен  быть в диапазоне от 1 до 6\n");
        }
    }

    std::string render() const override{
        return isCentried ? "<div style='text-align: center;'><h" + std::to_string(level) + ">" + text + "</h" + std::to_string(level) + "></div>\n" :
        "<h" + std::to_string(level) + ">" + text + "</h" + std::to_string(level) + ">\n";
    }
};
// Класс для текста
class HtmlText : public HtmlElement{ // текст
private:
    std::string text;

public:
    HtmlText(const std::string& text) : text(text) {}

    std::string render() const override{
        return "<p>" + text + "</p>\n";
    }
};

// Класс для таблицы
class HtmlTable : public HtmlElement {
private:
    std::vector<std::vector<std::string>> data;

public:
    HtmlTable(const std::vector<std::vector<std::string>>& data) : data(data) {}

    std::string render() const override {
        std::string html = "<div style='display: flex; justify-content: center;'>\n";
        html += "  <table border='1'>\n";
        for (const auto& row : data) {
            html += "    <tr>\n";
            for (const auto& cell : row) {
                html += "      <td>" + cell + "</td>\n";
            }
            html += "    </tr>\n";
        }
        html += "  </table>\n";
        html += "</div>\n";
        return html;
    }
};

// диаграмма
class HtmlChart : public HtmlElement{
private:
    std::string chartPath;
    std::string title;

public:
    HtmlChart(const std::string& nameChart, const std::string& title) : chartPath(fs::path(PATH_CARTIN) / nameChart), title(title) {}

    std::string render() const override {
        return "<div style='text-align: center;'><img src='" + chartPath + "' alt='Chart'><h4>" + title + "</h4></div>\n";
    }
};

// Класс для скриншота
class HtmlScreenshot : public HtmlElement{
private:
    std::string imagePath;
    std::string title;

public:
    HtmlScreenshot(const std::string& nameImage, const std::string& title) : imagePath(fs::path(PATH_CARTIN) / nameImage), title(title) {}

    std::string render() const override {
        return "<div style='text-align: center;'><img src='" + imagePath + "' alt='Screenshot'><h4>" + title + "</h4></div>\n";
    }
};

// строитель
class ReportBuilder{
private:
    std::vector<std::unique_ptr<HtmlElement>> elements;

public:
    void addHeader(const std::string& text, size_t level, bool isCentried){
        elements.push_back(std::make_unique<HtmlHeader>(text, level, isCentried));
    }

    void addText(const std::string& text) {
        elements.push_back(std::make_unique<HtmlText>(text));
    }

    void addTable(const std::vector<std::vector<std::string>>& data){
        elements.push_back(std::make_unique<HtmlTable>(data));
    }

    void addChart(const std::string& imagePath, const std::string& title){
        elements.push_back(std::make_unique<HtmlChart>(imagePath, title));
    }

    void addScreenshot(const std::string& imagePath, const std::string& title){
        elements.push_back(std::make_unique<HtmlScreenshot>(imagePath, title));
    }


    std::string build() const{
        std::string htmltext = "<html><body>\n";
        for(const auto& element : elements){
            htmltext += element->render();
        }
        htmltext = parseText(htmltext);
        htmltext += "</body></html>\n";
        return htmltext;
    }

    void saveReport(const std::string& name){
        fs::path pathfile = fs::path(PATH_SAVE_REPORTS) / (name + ".html");  
        
        std::ofstream outFile(pathfile);
        if(outFile.is_open()) {
            outFile << build();
            outFile.close();
            std::cout << "Отчет успешно записан в файл.\n";
        } 
        else{
            std::cerr << "Не удалось открыть файл для записи.\n";
        }
    }
};


#endif