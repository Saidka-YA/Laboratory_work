#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;
#define PI 3.14159265358979323846
void options();
double circumference();
double squareCirсle();
double circleSektorS();

int main()
{
    int option;
    do
    {
        options();
        cout << "Выберите Действие: ";
        while (!(cin >> option) || option < 1 || option > 4)
        {
            cout << "\nОшибка: введите положительное число!\n";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Выберите Действие: ";
        }
        switch (option)
        {
            case 1:
                {
                    double length = circumference();
                    cout << "\nДлина окружности: " <<  length << endl;
                    break;
                }
            case 2: 
            {
                double square = squareCirсle();
                cout << "\nПлощадь круга: " << square << endl;
                break;
            }
            case 3: 
            {
                double square = circleSektorS();
                cout << "\nПлощадь кругового сектора: " << square << endl; 
                break; 
            } 
        }
    } while (option != 4);
    return 0;
}

void options()
{
    cout << "\nВыберите действие:\n";
    cout << "1. Посчитать длину окружности\n";
    cout << "2. Посчитать площадь круга\n";
    cout << "3. Посчитать площадь кругового сектора\n";
    cout << "4. Выход\n";
}

double circumference()
{
    cout << "\nКакую формулу будем использовать?\n";
    cout << "1. Через радиус: 2 * p * r\n";
    cout << "2. Через диаметр: p * D\n";
    cout << "Номер формулы: ";
    int choice;
    double length = 0;
    while (!(cin >> choice) || choice != 1 && choice != 2)
    {
        cout << "\nОшибка: Введите 1 или 2!\n";
        cout << "Номер формулы: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    if (choice == 1)
    {
        double radius;
        cout << "Введите радиус: ";
        while (!(cin >> radius) || radius <= 0)
        {
            cout << "Ошибка: необходимо ввести положительное число\n";
            cout << "Введите радиус: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        length = 2 * PI * radius;
    }
    else if (choice == 2)
    {
        cout << "Введите диаметр: ";
        double diameter;
        while (!(cin >> diameter) ||  diameter <= 0)
        {
            cout << "Ошибка: необходимо ввести положительное число\n";
            cout << "Введите диаметр: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        length = PI * diameter;
    }
    else {cout << "Ошибка";}
    return length;
}

double squareCirсle()
{
    cout << "Какую формулу будем использовать?\n";
    cout << "1. Через радиус: p * r^2\n";
    cout << "2. Через диаметр: (p * d^2)/4\n";
    cout << "3. Через длину окружности: C^2 / (4*p)\n";
     cout << "Номер формулы: ";
    int choice;
    double square = 0;
    while (!(cin >> choice) || choice != 1 && choice != 2 && choice != 3)
    {
        cout << "\nОшибка: Введите 1, 2 или 3!\n";
        cout << "Номер формулы: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    if (choice == 1)
    {
        double radius;
        cout << "Введите радиус: ";
        while (!(cin >> radius) || radius <= 0)
        {
            cout << "Ошибка: Необходимо ввести положительное число!\n";
            cout << "Введите радиус: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        square = PI * pow(radius, 2);
    }
    else if (choice == 2)
    {
        double diameter;
        cout << "Введите диаметр: ";
        while (!(cin >> diameter) || diameter <= 0)
        {
            cout << "Ошибка: введите положительное число!\n";
            cout << "Введите диаметр: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        square = (PI * pow(diameter, 2)) / 4;
    }
    else if (choice == 3)
    {
        cout << "Введите длину окружности: ";
        double length;
        while (!(cin >> length) || length <= 0)
        {
            cout << "Ошика: введите положительное число!\n";
            cout << "Введите длину окружности: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        square = pow(length, 2) / (4 * PI);
    }
    else {cout << "\nОшибка!!!!\n";}
    return square;
}

double circleSektorS()
{
    cout << "Какую формулу будем использовать?\n";
    cout << "1. Через градусную меру угла и радиус: (p * r^2 * a) / 360\n";
    cout << "2. Через радианную меру угла и радиус: (r^2 * a) / 2\n";
    cout << "3. Через длину дуги и радиус: (l * r) / 2\n";
    cout << "Номер формулы: ";
    int choice;
    double square = 0;
    while (!(cin >> choice) || choice != 1 && choice != 2 && choice != 3)
    {
        cout << "\nОшибка: Введите 1, 2 или 3!\n";
        cout << "Номер формулы: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    if (choice == 1)
    {
        cout << "Введите угол а от 0 до 360: ";
        double angle;
        while (!(cin >> angle) || angle <= 0 || angle > 360)
        {
            cout << "Ошибка: введите положительное число от 0 до 360!\n";
            cout << "Введите угол а от 0 до 360: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        cout << "Введите радиус: ";
        double radius;
        while (!(cin >> radius) || radius <= 0)
        {
            cout << "Ошибка: введите положительное число!\n";
            cout << "Введите радиус: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        square = (PI * pow(radius, 2) * angle) / 360;
    }
    else if (choice == 2)
    {
        cout << "Введите радиан а от 0 до 2: ";
        double angle;
        if (!(cin >> angle) || angle <= 0 || angle > 2)
        {
            cout << "Ошибка: введите положительное число от 0 до 2!\n";
            cout << "Введите радиан а от 0 до 2: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        cout << "Введите радиус: ";
        double radius;
        if (!(cin >> radius) || radius <= 0)
        {
            cout << "Ошибка: введите положительное число!\n";
            cout << "Введите радиус: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        square = (pow(radius, 2) * angle) / 2;
    }
    else if (choice == 3)
    {
        cout << "Введите длину дуги: ";
        double length;
        if (!(cin >> length) || length <= 0)
        {
            cout << "Ошибка: введите положительное число!\n";
            cout << "Введите длину дуги: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        cout << "Введите радиус: ";
        double radius;
        if (!(cin >> radius) || radius <= 0)
        {
            cout << "Ошибка: введите положительное число!\n";
            cout << "Введите радиус: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        square = (length * radius) / 2;
    }
    else {cout << "\nОшибка!!!!!!!\n";}
    return square;
}

