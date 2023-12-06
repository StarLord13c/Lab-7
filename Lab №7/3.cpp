#include <iostream>
using namespace std;

// 3 Напишіть цикли for, while, do…while для друку чисел від 100 до 200 через 2.

void main() 
{
    for (int i = 100; i <= 200; i += 2) // цикл for
    {
        cout << i << " ";
    }
    int i = 100;
    while (i <= 200) // цикл while
    {
        cout << i << " ";
        i += 2;
    }
    do { // цикл do, while
        cout << i << " ";
        i += 2;
    } while (i <= 200);
}