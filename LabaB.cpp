#include <iostream>
#include <cmath>
#include <limits>

using namespace std;
int main(){
    double a, b, c;

    cout << "Введите стороны треугольника:\n";

    cout << "a = ";
    while (!(cin >> a)) {
        cout << "Недопустимый символ! Введите число: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize> :: max(), '\n');
    }

    cout << "b = ";
    while (!(cin >> b)) {
        cout << "Недопустимый символ! Введите число: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize> :: max(), '\n');
    }

    cout << "c = ";
    while (!(cin >> c)) {
        cout << "Недопустимый символ! Введите число: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize> :: max(), '\n');
    }

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "\nСтороны треугольника должны быть положительными!\n";
        return 0;
    }
    
    double P = a + b + c; // Периметр
    cout << "\nПериметр: " << P << endl;

    double p = P / 2; // Площадь по формуле Герона
    double S = sqrt(p*(p - a)*(p - b)*(p - c));
    cout << "Площадь: " << S << endl;

    if (a == b || a == c || b == c){ // Проверка на равнобедренность
        cout << "Треугольник равнобедренный" << endl;
    } else {
        cout << "Треугольник не равнобедренный" << endl;
    }
    return 0;
}