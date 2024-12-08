#pragma once
#ifndef PARSER_TEXT
#define PARSER_TEXT
#include <iostream>
#include <string>


std::string parseText(const std::string& input) {
    std::string corectHtml;
    size_t pos = 0;
    while(pos < input.length()){
        size_t startBold = input.find("__", pos);
        size_t startCurive = input.find("*", pos);

        if(startBold != std::string::npos && (startBold < startCurive || startCurive == std::string::npos)){
            corectHtml += input.substr(pos, startBold - pos); // жирный
            size_t endBold = input.find("__", startBold + 2);
            if(endBold != std::string::npos){
                corectHtml += "<strong>" + input.substr(startBold + 2, endBold - startBold - 2) + "</strong>";
                pos = endBold + 2;
            } 
            else{
                corectHtml += input.substr(startBold); // закрываем если не закрыто
                break;
            }
        }
        else if(startCurive != std::string::npos){// курсив
            corectHtml += input.substr(pos, startCurive - pos); // Добавляем текст до курсивного
            size_t endCursive = input.find("*", startCurive + 1);
            if(endCursive != std::string::npos){
                corectHtml += "<em>" + input.substr(startCurive + 1, endCursive - startCurive - 1) + "</em>";
                pos = endCursive + 1;
            } 
            else{
                corectHtml += input.substr(startCurive); // закрываем если не закрыто
                break;
            }
        } 
        else{//записываем просто текст
            corectHtml += input.substr(pos);
            break;
        }
    }
    return corectHtml;
}



#endif