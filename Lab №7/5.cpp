#include <iostream>
#include <Windows.h>
using namespace std;

/* 5 �������� �������� ���������� ���� �� ������� �����, �� ��������� � ��������� :
a)	������� ����� ���������� ��������� �� ���������;
b)	���������� ������������ �� ����� ��������. */

int main() 
{
    int sum = 0;
    int product = 1;
    char choice;

    // ���� ���� �� ���� ������ ��������
    cout << "������� ����� ��������:\n";
    cout << "a) ʳ������ ����� ���������� ���������;\n";
    cout << "b) ���������� ������������ �� �����.\n";

    cout << "��� ����: ";
    cin >> choice;

    if (choice == 'a' || choice == 'A') {
        int count;
        // �������� ������� �����
        cout << "������ ������� �����: ";
        cin >> count;

        if (count <= 0) {
            // �������� ����������� �������� ������� �����
            cout << "����������� ������� �����. �������� �����������.\n";
            return 1;
        }

        for (int i = 0; i < count; ++i) {
            int number;
            // �������� ����� �� �� ����������
            cout << "������ ����� " << i + 1 << ": ";
            cin >> number;

            sum += number;
            product *= number;
        }
    }
    else if (choice == 'b' || choice == 'B') {
        do {
            int number;
            // �������� ����� �� �� ���������� (� ����������� �� �����)
            cout << "������ �����: ";
            cin >> number;

            sum += number;
            product *= number;

            cout << "���������� ��������? (y/n): ";
            cin >> choice;

        } while (choice == 'y' || choice == 'Y');
    }
    else {
        // �������� ����������� �������� ������
        cout << "������� ����. �������� �����������.\n";
        return 1;
    }

    // ��������� ����������
    cout << "���� �������� �����: " << sum << endl;
    cout << "������� �������� �����: " << product << endl;

    return 0;
}