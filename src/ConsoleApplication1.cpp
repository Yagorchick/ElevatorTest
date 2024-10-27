// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

enum levelsName {
    PARKING,
    BANK,
    INSURANCE_COMPANY,
    STOCK_EXCHANGE,
    EXHIBITION_HALL,
    RESTAURANT
};
/*
static void LevelDescription(levelsName level) {
    switch (level) {
    case PARKING:
        cout << "Вы в Паркинге!";
        break;
    case BANK:
        cout << "Вы в Креди Агриколь Банке!";
        break;
    case INSURANCE_COMPANY:
        cout << "Вы в Страховой компании UNICA!";
        break;
    case STOCK_EXCHANGE:
        cout << "Вы в Фондовой Бирже!";
        break;
    case EXHIBITION_HALL:
        cout << "Вы в Выставочном зале и зале для Презентаций!";
        break;
    case RESTAURANT:
        cout << "Вы в Ресторане Sky!";
        break;
    default:
        cout << "Извините, но такой этаж Отсутствует!";
    }
}*/


int main()
{
    setlocale(LC_ALL, "Russian");

    int level = -1;

    do {

        cout << ("Выберите Этаж: \n"
            "0 - Паркинг \n"
            "1 - Банк \n"
            "2 - Страховая Компания \n"
            "3 - Фондовая Биржа \n"
            "4 - Выставочный Зал \n"
            "5 - Ресторан \n"
            "\nВаш выбор: ");

        cin >> level;

        switch (level) {
        case PARKING:
            cout << "~Tun-dun~ Нулевой Этаж! Вы в Паркинге! \n";
            break;
        case BANK:
            cout << "~Tun-dun~ Первый Этаж! Вы в Креди Агриколь Банке! \n";
            cout << "Чтобы выйти из Лифта - нажмите 0! \n \n";
            break;
        case INSURANCE_COMPANY:
            cout << "~Tun-dun~ Второй Этаж! Вы в Страховой компании UNICA! \n";
            cout << "Чтобы выйти из Лифта - нажмите 0! \n \n";
            break;
        case STOCK_EXCHANGE:
            cout << "~Tun-dun~ Третий Этаж! Вы в Фондовой Бирже! \n";
            cout << "Чтобы выйти из Лифта - нажмите 0! \n \n";
            break;
        case EXHIBITION_HALL:
            cout << "~Tun-dun~ Четвертый Этаж! Вы в Выставочном зале и зале для Презентаций! \n";
            cout << "Чтобы выйти из Лифта - нажмите 0! \n \n";
            break;
        case RESTAURANT:
            cout << "~Tun-dun~ Пятый Этаж! Вы в Ресторане Sky! \n";
            cout << "Чтобы выйти из Лифта - нажмите 0! \n \n";
            break;
        default:
            cout << "Извините, но Кнопка данного этажа Отсутствует! Сделайте другой выбор: \n \n";
        }

    } while (level != 0);

    cin.get();
    return 0;
}