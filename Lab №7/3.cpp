#include <iostream>
using namespace std;

// 3 �������� ����� for, while, do�while ��� ����� ����� �� 100 �� 200 ����� 2.

void main() 
{
    for (int i = 100; i <= 200; i += 2) // ���� for
    {
        cout << i << " ";
    }
    int i = 100;
    while (i <= 200) // ���� while
    {
        cout << i << " ";
        i += 2;
    }
    do { // ���� do, while
        cout << i << " ";
        i += 2;
    } while (i <= 200);
}