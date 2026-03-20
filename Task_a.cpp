#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>

using namespace std;
vector<string>WatchList;

void SomeOptions()
{
    cout << "\nOptions: " << endl;
    cout << "1. Add one element" << endl;
    cout << "2. Delete one element" << endl;
    cout << "3. See all options" << endl;
    cout << "4. Exit" << endl;
}

void addElem()
{
    cout << "\nEnter add element: ";
    string element;
    getline(cin, element);
    WatchList.push_back(element);
}

void delElem()
{
    if (WatchList.empty())
    {
        cout << "\nError: list is empty!" << endl;
        return;
    }
    for (size_t i = 0; i < WatchList.size(); ++i)
    {
        cout << i + 1 << '.' << WatchList[i] << endl;
    }
    cout << "Select element to delete: " << endl;
    size_t elm;
    cin >> elm;
    cin.ignore();
    if (elm > 0 && elm <= WatchList.size())
    {
        WatchList.erase(WatchList.begin() + elm - 1);
    }
    else {
        cout << "\nElement not existance!" << endl;
    }
}

void viewList()
{
    if (WatchList.empty())
    {
        cout << "\nError: the list is empty!" << endl;
    }
    else {
        cout << "\nContained of list: " << endl;
    }
    for (size_t i = 0; i < WatchList.size(); ++i)
    {
        cout << i + 1 << '.' << WatchList[i] << endl;
    }
}

int main () {
    int option;
    do
    {
        SomeOptions();
        cout << "Enter a option: ";
        cin >> option;
        cin.ignore();
        switch(option)
        {
            case 1: addElem(); break;
            case 2: delElem(); break;
            case 3: viewList(); break;
        }
    } while (option != 4);
}
