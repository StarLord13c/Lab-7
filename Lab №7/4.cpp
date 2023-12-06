#include <iostream>
#include <Windows.h>
using namespace std;

// 4 Напишіть програму для введення числа із заданого діапазону з клавіатури. У разі виходу за кордон діапазону повторіть введення номера.

void main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const int lowerLimit = 1;   // нижня межа діапазону
    const int upperLimit = 100; // верхня межа діапазону
    int x;

    do {
        cout << "Введіть число у діапазоні від " << lowerLimit << " до " << upperLimit << ": ";
        cin >> x;

        if (x < lowerLimit || x > upperLimit) {
            cout << "Число не знаходиться в межах діапазону. Повторіть введення.\n";
        }

    } while (x < lowerLimit || x > upperLimit);

    cout << "Ви ввели коректне число: " << x << endl;
}
