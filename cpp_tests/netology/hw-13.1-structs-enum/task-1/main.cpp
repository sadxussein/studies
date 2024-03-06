#include <iostream>

enum Month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

std::string isValidMonth(Month m) {
    switch (m) {
        case January:
            return "Январь";
        case February:
            return "Февраль";
        case March:
            return "Март";
        case April:
            return "Апрель";
        case May:
            return "Май";
        case June:
            return "Июнь";
        case July:
            return "Июль";
        case August:
            return "Август";
        case September:
            return "Сентябрь";
        case October:
            return "Октябрь";
        case November:
            return "Ноябрь";
        case December:
            return "Декабрь";
        default:
            return "Неправильный номер!";
    }
}

int main() {
    int input;

    do {
        std::cin >> input;
        auto month = static_cast<Month>(input);
        std::cout << isValidMonth(month) << std::endl;
    } while (input != 0);

    std::cout << "До свидания!" << std::endl;

    return 0;
}
