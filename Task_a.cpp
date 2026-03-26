#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    double lenght, width;
    cout << "Enter lenght: ";
    cin >> lenght;
    while (cin.fail() || lenght <= 0) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Please enter a NUMBER!: " << endl;
        }
        else {
            cout << "Invalid number! Enter a correct number: " << endl;
        }
        cin >> lenght;
    }

    cout << "Enter width: ";
    cin >> width;
    while (cin.fail() || width <= 0) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Please enter a NUMBER!: " << endl;
        }
        else {
            cout << "Invalid number! Enter a correct number: " << endl;
        }
        cin >> width;
    }

    double perimetr = 2 * (lenght + width);
    double square = lenght * width;
    double diagonal = sqrt(lenght * lenght + width * width);

    cout << "perimetr: " << perimetr  << endl;
    cout << "square: " << square << endl;
    cout << "diagonal lenght: " << diagonal << endl; 

    return 0;
}
