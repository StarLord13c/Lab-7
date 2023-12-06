#include <iostream>
#include <Windows.h>
using namespace std;

// 4 �������� �������� ��� �������� ����� �� �������� �������� � ���������. � ��� ������ �� ������ �������� �������� �������� ������.

void main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const int lowerLimit = 1;   // ����� ���� ��������
    const int upperLimit = 100; // ������ ���� ��������
    int x;

    do {
        cout << "������ ����� � ������� �� " << lowerLimit << " �� " << upperLimit << ": ";
        cin >> x;

        if (x < lowerLimit || x > upperLimit) {
            cout << "����� �� ����������� � ����� ��������. �������� ��������.\n";
        }

    } while (x < lowerLimit || x > upperLimit);

    cout << "�� ����� �������� �����: " << x << endl;
}
