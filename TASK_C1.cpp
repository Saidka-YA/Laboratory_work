#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    double a, b, c, d;
    double h, P, S, midLine;
    bool valid = false;

    
    while (!valid) {
        
        cout << "Введите сторону a: ";
        cin >> a;
        while (cin.fail() || a <= 0) {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Пожалуйста, введите число!: ";
            } else {
                cout << "Некорректное число, введите новое число: ";
            }
            cin >> a;
        }

        cout << "Введите сторону b: ";
        cin >> b;
        while (cin.fail() || b <= 0) {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Пожалуйста, введите число!: ";
            } else {
                cout << "Некорректное число, введите новое число: ";
            }
            cin >> b;
        }

        cout << "Введите сторону c: ";
        cin >> c;
        while (cin.fail() || c <= 0) {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Пожалуйста, введите число!: ";
            } else {
                cout << "Некорректное число, введите новое число: ";
            }
            cin >> c;
        }

        cout << "Введите сторону d: ";
        cin >> d;
        while (cin.fail() || d <= 0) {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Пожалуйста, введите число!: ";
            } else {
                cout << "Некорректное число, введите новое число: ";
            }
            cin >> d;
        }

        
        if (a == 0 && b == 0 && c == 0 && d == 0) {
            cout << "ОШИБКА!!! СТОРОНЫ РАВНЫ 0" << endl;
            valid = false;
            continue;
        }

        valid = true;

        if (a == b) {
            cout << "ОШИБКА!!! ОСНОВАНИЯ НЕ МОГУТ БЫТЬ РАВНЫ!!!" << endl;
            valid = false;
        }

        double diff = (b > a) ? (b - a) : (a - b);
        if (diff >= c + d) {
            cout << "РАЗНОСТЬ ОСНОВАНИЙ НЕ МЕНЬШЕ СУММЫ БОКОВЫХ СТОРОН. ОШИБКА!!!" << endl;
            valid = false;
        }

        double cd_diff = (c > d) ? (c - d) : (d - c);
        if (diff <= cd_diff) {
            cout << "РАЗНОСТЬ ОСНОВАНИЙ НЕ БОЛЬШЕ РАЗНОСТИ БОКОВЫХ СТОРОН. ОШИБКА!!!" << endl;
            valid = false;
        }

        if (!valid) {
            cout << "Повторите ввод сторон.\n";
        }
    }

    
    midLine = (a + b) / 2;
    double p = (a + b + c + d) / 2;
    S = ((a + b) / abs(b - a)) * sqrt((p - a) * (p - b) * (p - a - c) * (p - a - d));

    
    int choice;
    do {
        cout << "\nЧто ищем?" << endl;
        cout << "1 - Периметр" << endl;
        cout << "2 - Площадь" << endl;
        cout << "3 - Средняя линия" << endl;
        cout << "0 - Выход" << endl;
        cout << "Ваш выбор: ";
        cin >> choice;

        while (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Пожалуйста, введите число!: ";
            cin >> choice;
        }

        switch (choice) {
            case 1:
                P = a + b + c + d;
                cout << "Периметр равен = " << P << endl;
                break;
            case 2:
                cout << "Площадь равна = " << S << endl;
                break;
            case 3:
                cout << "Средняя линия равна = " << midLine << endl;
                break;
            case 0:
                cout << "EXIT!!!" << endl;
                break;
            default:
                cout << "Неверный выбор. Введите число от 0 до 3" << endl;
        }
    } while (choice != 0);

    return 0;
}

