#pragma once
#ifndef HARVESTING
#define HARVESTING
#include"buildReports.h"


void HarvestingInformatica(){
    ReportBuilder ReportInfa;

    // начало
    ReportInfa.addHeader("Отчёт по практической работе по ифнорматике", 1, true);
    ReportInfa.addHeader("Изучение работы сортировок", 2, true);

    // заданрие
    ReportInfa.addHeader("Задание", 1, false);

    ReportInfa.addText("__Задание к работе:__ изучить и понять принцип работы сортировок и описать их");
    ReportInfa.addText("__Методика выполнения работы:__");
    ReportInfa.addText("1. Разработать  алгоритм  решения  задачи  по  индивидуальному  заданию.");
    ReportInfa.addText("2. Изучить и понять работу сортировок.");
    ReportInfa.addText("3. Составить отчёт по проделаной работе с описанием сортировок");

    ReportInfa.addHeader("Выполнение задания", 1, true);
    // описание сортировок
    ReportInfa.addHeader("Сортировка пузырьком (*Bubble Sort*)", 3, false);
    ReportInfa.addText("Алгоритм сравнивает соседние элементы и меняет их местами, если они находятся в неправильном порядке. Процесс повторяется до тех пор, пока не будет выполнено условие сортировки.");

    ReportInfa.addHeader("Сортировка выбором (*Selection Sort*)", 3, false);
    ReportInfa.addText("Алгоритм делит массив на отсортированную и неотсортированную части. На каждой итерации выбирается минимальный элемент из неотсортированной части и перемещается в конец отсортированной.");

    ReportInfa.addHeader("Сортировка слиянием (*Merge Sort*)", 3, false);
    ReportInfa.addText("Алгоритм использует метод 'разделяй и властвуй'. Массив делится на две половины, каждая из которых сортируется рекурсивно, а затем происходит слияние отсортированных половин.");

    ReportInfa.addHeader("Быстрая сортировка (*Quick Sort*)", 3, false);
    ReportInfa.addText("Алгоритм также использует метод 'разделяй и властвуй'. Выбирается опорный элемент, и массив делится на элементы меньше и больше опорного. Затем сортируются обе части.");
    
    ReportInfa.addHeader("Пирамидальная сортировка (*Heap Sort*)", 3, false);
    ReportInfa.addText("Алгоритм строит бинарную кучу и последовательно извлекает максимальные элементы, помещая их в отсортированный массив.");

    //таблица
    ReportInfa.addHeader("Сложности данных сортировок", 2, true);
    ReportInfa.addTable({
        {"Алгоритм", "Сложность в худшем случае", "Сложность в среденм", "Сложность в лучшем случае"},        
        {"Сортировка пузырьком", "O(n ^ 2)", "O(n ^ 2)", "O(n)"},
        {"Сортировка выбором", "O(n ^ 2)", "O(n ^ 2)", "O(n ^ 2)"},
        {"Сортировка слиянием", "O(n log n)", "O(n log n)", "O(n log n)"},
        {"Быстрая сортировка", "O(n ^ 2)", "O(n log n)", "O(n log n)"},
        {"Пирамидальная сортировка", "O(n log n)", "O(n log n)", "O(n log n)"}
    });

    // картинка
    ReportInfa.addHeader("Весёлая картинка", 1, true);
    ReportInfa.addScreenshot("screen3.png", "Рисунок 1 - рисунок для всеобщего облегчения");

    // Заключение
    ReportInfa.addHeader("Заключение", 1, true);
    ReportInfa.addText("Сортировка является одной из основополагающих задач в информатике, и её значимость трудно переоценить. В условиях современного мира, где объёмы данных растут с каждым днём, эффективная организация и обработка информации становятся критически важными для успешного функционирования различных систем и приложений. Выбор алгоритма сортировки не является тривиальной задачей; он зависит от множества факторов, таких как размер и структура данных, требования к времени выполнения и доступной памяти, а также специфические условия, в которых будет производиться сортировка. Понимание различных алгоритмов сортировки, их особенностей и характеристик позволяет разработчикам не только выбирать наиболее подходящие решения для конкретных задач, но и адаптировать их под уникальные условия работы. Это знание помогает оптимизировать производительность программного обеспечения, улучшая скорость обработки данных и снижая затраты на ресурсы. В конечном итоге, умение эффективно применять алгоритмы сортировки становится важным навыком для специалистов в области программирования, анализа данных и разработки программных систем, что способствует созданию более быстрых и эффективных решений в условиях постоянно меняющегося технологического ландшафта.");


    // Список литературы
    ReportInfa.addHeader("Список литературы", 2, false);
    ReportInfa.addText("1. *Кормен, Т. Х.*, *Лейзерсон, Ч. Э.*, *Ривест, Р. Л.*, *Штайн, К.* __Алгоритмы: построение и анализ__");
    ReportInfa.addText("2. *Седжвик, Р.*, *Уэйн, К.* __Алгоритмы на Java__.");
    ReportInfa.addText("3. *Нейл. Д.* __Сортировка и поиск__.");


    ReportInfa.saveReport("otchetpractica1SuSuSukleiminNikolaiAbc325");
}

void HarvestingProgramming(){
    ReportBuilder ReportProg;

    ReportProg.addHeader("Отчёт по Лабораторной работе №1", 1, true);
    ReportProg.addHeader("Абстрактные структуры данных", 2, true);

    ReportProg.addHeader("Задание", 1, false);
    ReportProg.addText("__Задание к работе:__ изучить и понять принцип работы различных структур данных и описать их");
    ReportProg.addText("__Методика выполнения работы:__");
    ReportProg.addText("1. Разработать алгоритм решения задачи по индивидуальному заданию.");
    ReportProg.addText("2. Изучить и понять работу структур данных.");
    ReportProg.addText("3. Составить отчёт по проделанной работе с описанием структур данных");

    ReportProg.addHeader("Выполнение задания", 1, true);
    
    // описание структур данных
    ReportProg.addHeader("Массивы (*Arrays*)", 3, false);
    ReportProg.addText("Массивы представляют собой коллекцию элементов одного типа, доступ к которым осуществляется по индексу. Они обеспечивают быстрый доступ к элементам, но имеют фиксированный размер.");

    ReportProg.addHeader("Связные списки (*Linked Lists*)", 3, false);
    ReportProg.addText("Связные списки состоят из узлов, каждый из которых содержит данные и указатель на следующий узел. Они позволяют динамически изменять размер, но доступ к элементам медленнее, чем в массивах.");

    ReportProg.addHeader("Стек (*Stack*)", 3, false);
    ReportProg.addText("Стек — это структура данных, работающая по принципу LIFO (последний пришёл — первый вышел). Элементы добавляются и удаляются только с одного конца.");

    ReportProg.addHeader("Очередь (*Queue*)", 3, false);
    ReportProg.addText("Очередь работает по принципу FIFO (первый пришёл — первый вышел). Элементы добавляются в конец и удаляются с начала.");

    ReportProg.addHeader("Деревья (*Trees*)", 3, false);
    ReportProg.addText("Деревья представляют собой иерархическую структуру данных, состоящую из узлов, где каждый узел может иметь несколько дочерних узлов. Они используются для представления иерархических данных.");

    // таблица
    ReportProg.addHeader("Реализованные структуры данных", 2, true);
    ReportProg.addTable({
        {"Структура данных", "Доступ", "Изменение размера", "Сложность вставки/удаления"},
        {"Массив", "O(1)", "Фиксированный", "O(n)"},
        {"Связный список", "O(n)", "Динамический", "O(1)"},
        {"Стек", "O(n)", "Динамический", "O(1)"},
        {"Очередь", "O(n)", "Динамический", "O(1)"},
        {"Дерево", "O(log n)", "Динамический", "O(log n)"},
    });


    ReportProg.addHeader("Иллюстрация структур данных", 1, true);
    ReportProg.addScreenshot("screen6.png", "Рисунок 1 - объектно ориентированное программирование");
    ReportProg.addScreenshot("screen4.png", "Рисунок 2 - аве аве");
    


    ReportProg.addHeader("Заключение", 1, true);
    ReportProg.addText("Структуры данных являются основой для эффективного хранения и обработки информации. Понимание различных структур данных и их характеристик позволяет разработчикам выбирать наиболее подходящие решения для конкретных задач, оптимизируя производительность программного обеспечения. Каждая структура данных имеет свои преимущества и недостатки, и выбор правильной структуры может значительно повлиять на эффективность алгоритмов и приложений.");

    ReportProg.saveReport("laboratornayarabota4Cherednyak");
}

void HarvestingProgrammingTechniques() {
    ReportBuilder ReportTech;

    ReportTech.addHeader("Отчёт по практической работе по информатике", 1, true);
    ReportTech.addHeader("Изучение технологий и методов программирования", 2, true);

    ReportTech.addHeader("Задание", 1, false);
    ReportTech.addText("__Задание к работе:__ изучить и понять различные технологии и методы программирования и описать их");
    ReportTech.addText("__Методика выполнения работы:__");
    ReportTech.addText("1. Изучить основные технологии программирования.");
    ReportTech.addText("2. Понять принципы работы различных методов программирования.");
    ReportTech.addText("3. Составить отчёт по проделанной работе с описанием технологий и методов программирования");

    ReportTech.addHeader("Выполнение задания", 1, true);
    
    // описание
    ReportTech.addHeader("Процедурное программирование", 3, false);
    ReportTech.addText("Процедурное программирование основывается на использовании процедур или функций для выполнения задач. Оно фокусируется на последовательности шагов, необходимых для решения проблемы.");

    ReportTech.addHeader("Объектно-ориентированное программирование (ООП)", 3, false);
    ReportTech.addText("ООП основывается на концепции объектов, которые содержат данные и методы. Основные принципы ООП включают инкапсуляцию, наследование и полиморфизм.");

    ReportTech.addHeader("Функциональное программирование", 3, false);
    ReportTech.addText("Функциональное программирование акцентирует внимание на вычислениях с помощью функций. Оно избегает изменения состояния и данных, что делает код более предсказуемым и тестируемым.");

    ReportTech.addHeader("Логическое программирование", 3, false);
    ReportTech.addText("Логическое программирование основывается на формальной логике. Программы описываются в виде логических утверждений, и выполнение программы сводится к выводу новых фактов из заданных.");

    ReportTech.addHeader("Событийно-ориентированное программирование", 3, false);
    ReportTech.addText("Событийно-ориентированное программирование фокусируется на обработке событий, таких как нажатия кнопок или изменения данных. Оно широко используется в разработке графических интерфейсов.");

 
    ReportTech.addHeader("Сравнение методов программирования", 2, true);
    ReportTech.addTable({
        {"Метод", "Основные принципы", "Преимущества", "Недостатки"},
        {"Процедурное", "Использование процедур", "Простота", "Трудности с масштабированием"},
        {"ООП", "Объекты и классы", "Повторное использование кода", "Сложность проектирования"},
        {"Функциональное", "Функции как основные единицы", "Предсказуемость", "Сложность понимания"},
        {"Логическое", "Логические утверждения", "Мощные абстракции", "Низкая производительность"},
        {"Событийно-ориентированное", "Обработка событий", "Интерактивность", "Сложность отладки"}
    });


    ReportTech.addHeader("Иллюстрация методов программирования", 1, true);
    ReportTech.addChart("screen5.png", "Диаграмма 1 - иллюстрация различных методов программирования");
    ReportTech.addScreenshot("screen6.png", "Рисунок 1 - где-то уже это видели...");

    ReportTech.addHeader("Заключение", 1, true);
    ReportTech.addText("Технологии и методы программирования играют ключевую роль в разработке программного обеспечения. Понимание различных подходов позволяет разработчикам выбирать наиболее подходящие решения для конкретных задач, оптимизируя производительность и качество кода. Каждый метод имеет свои сильные и слабые стороны, и выбор правильного подхода может значительно повлиять на успех проекта.");

    // Список литературы
    ReportTech.addHeader("Список литературы", 2, false);
    ReportTech.addText("1. *Брукс, Ф. П.* __Мифический человеко-месяц__.");
    ReportTech.addText("2. *Мартин, Р. К.* __Чистый код: создание, анализ и рефакторинг__.");

    ReportTech.saveReport("otchetTechCherednyak");
}

#endif