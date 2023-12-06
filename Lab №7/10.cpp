#include <iostream>
#include <Windows.h>
using namespace std;

// 10 �������� 3 ������� switch ��� ����� ���� ��� �����, �������������� ��� ���� ���� ���������: ����, ������ �� �������������.

enum DaysOfWeek { // ������������� ��� ������������� ��� �����
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

void main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int choice;

    do {   // do-while ���� ��� ���������� �������� � ��� ������������ ������
        cout << "������ ��� �������� (1 - ֳ�� �����, 2 - ������, 3 - �������������): "; // �������� ���� ������ ���� ��������
        cin >> choice;

        switch (choice) {
        case 1: {  // �������� ������ ����� ��� ������ ��� �����
            int dayNumber;
            cout << "������ ����� ��� ����� (1-7): ";
            cin >> dayNumber;

            switch (dayNumber) { // switch ��� ���������� ����� ��� �����
            case 1:
                cout << "��������";
                break;
            case 2:
                cout << "³������";
                break;
            case 3:
                cout << "������";
                break;
            case 4:
                cout << "������";
                break;
            case 5:
                cout << "�'������";
                break;
            case 6:
                cout << "������";
                break;
            case 7:
                cout << "�����";
                break;
            default:
                cout << "����������� ����� ���!";
            }
            break;
        }

        case 2: { // �������� ������� ��� ����� ��� �����
            char daySymbol;
            cout << "������ ����� ����� ��� �����: ";
            cin >> daySymbol;
            switch (daySymbol) {        // switch ��� ���������� ����� ��� �����
            case '��':
                cout << "��������";
                break;
            case '��':
                cout << "³������";
                break;
            case '��':
                cout << "������";
                break;
            case '��':
                cout << "������";
                break;
            case '��':
                cout << "�'������";
                break;
            case '��':
                cout << "������";
                break;
            case '��':
                cout << "�����";
                break;
            default:
                cout << "���������� �����!";
            }
            break;
        }

        case 3: { // ������������ ������������� ��� ���������� ��� �����
            DaysOfWeek day = WEDNESDAY;
            switch (day) {
            case MONDAY:
                cout << "��������";
                break;
            case TUESDAY:
                cout << "³������";
                break;
            case WEDNESDAY:
                cout << "������";
                break;
            case THURSDAY:
                cout << "������";
                break;
            case FRIDAY:
                cout << "�'������";
                break;
            case SATURDAY:
                cout << "������";
                break;
            case SUNDAY:
                cout << "�����";
                break;
            default:
                cout << "����������� ���� �����!";
            }
            break;
        }
        default:
            cout << "����������� ����!";
        }

        cout << endl; // ����� ����� ��� ������� ��������� ��� ��������� ���������

    } while (choice < 1 || choice > 3); // �����������, ���� ���� �� � ���������
}
