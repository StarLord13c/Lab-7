#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

/* 9 ***�������� ������� �������� ��� �������� ��������� ��'���� (Cat, Pencil, Worker, Student�) � ��������� �� ���������� �� �� �����. 
��������������� ����� � ���������� ����. */

class Cat { // ���� ��� ��'���� "Cat"
public:
    string name;
    int age;
    void printInfo() {
        cout << "Cat: Name - " << name << ", Age - " << age << endl;
    }
};

class Pencil { // ���� ��� ��'���� "Pencil"
public:
    string color;
    double length;
    void printInfo() {
        cout << "Pencil: Color - " << color << ", Length - " << length << endl;
    }
};

class Worker { // ���� ��� ��'���� "Worker"
public:
    string name;
    int salary;
    void printInfo() {
        cout << "Worker: Name - " << name << ", Salary - " << salary << endl;
    }
};

class Student { // ���� ��� ��'���� "Student"
public:
    string name;
    int age;
    void printInfo() {
        cout << "Student: Name - " << name << ", Age - " << age << endl;
    }
};

void main() { // ������� ��������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    char choice;

    do {
        cout << "������� ��� ��'���� (c - Cat, p - Pencil, w - Worker, s - Student): ";
        cin >> choice;

        switch (choice) { // ���� ���� ��`����
        case 'c': // ������ ���� (ʳ�)
        {
            Cat cat;
            cout << "������ ��'� ����: ";
            cin >> cat.name;
            cout << "������ �� ����: ";
            cin >> cat.age;
            cat.printInfo();
        }
        break;

        case 'p': // ������ ���� (������)
        {
            Pencil pencil;
            cout << "������ ���� �����: ";
            cin >> pencil.color;
            cout << "������ ������� �����: ";
            cin >> pencil.length;
            pencil.printInfo();
        }
        break;

        case 'w': // ����� ���� (���������)
        {
            Worker worker;
            cout << "������ ��'� ����������: ";
            cin >> worker.name;
            cout << "������ �������� ����������: ";
            cin >> worker.salary;
            worker.printInfo();
        }
        break;

        case 's':// ��������� ���� (�������)
        {
            Student student;
            cout << "������ ��'� ��������: ";
            cin >> student.name;
            cout << "������ �� ��������: ";
            cin >> student.age;
            student.printInfo();
        }
        break;
        default:
            cout << "������� ����." << endl;
        }
        cout << "���������� ��������? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');
}