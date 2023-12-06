#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

/* 9 ***Напишіть циклічну програму для введення параметрів об'єкта (Cat, Pencil, Worker, Student…) з клавіатури та роздруківки їх на екран. 
Використовувати класи з попередньої теми. */

class Cat { // клас для об'єкта "Cat"
public:
    string name;
    int age;
    void printInfo() {
        cout << "Cat: Name - " << name << ", Age - " << age << endl;
    }
};

class Pencil { // клас для об'єкта "Pencil"
public:
    string color;
    double length;
    void printInfo() {
        cout << "Pencil: Color - " << color << ", Length - " << length << endl;
    }
};

class Worker { // клас для об'єкта "Worker"
public:
    string name;
    int salary;
    void printInfo() {
        cout << "Worker: Name - " << name << ", Salary - " << salary << endl;
    }
};

class Student { // клас для об'єкта "Student"
public:
    string name;
    int age;
    void printInfo() {
        cout << "Student: Name - " << name << ", Age - " << age << endl;
    }
};

void main() { // основна програма
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    char choice;

    do {
        cout << "Виберіть тип об'єкта (c - Cat, p - Pencil, w - Worker, s - Student): ";
        cin >> choice;

        switch (choice) { // вибір типа об`єкта
        case 'c': // перший кейс (Кіт)
        {
            Cat cat;
            cout << "Введіть ім'я кота: ";
            cin >> cat.name;
            cout << "Введіть вік кота: ";
            cin >> cat.age;
            cat.printInfo();
        }
        break;

        case 'p': // другий кейс (Олівець)
        {
            Pencil pencil;
            cout << "Введіть колір олівця: ";
            cin >> pencil.color;
            cout << "Введіть довжину олівця: ";
            cin >> pencil.length;
            pencil.printInfo();
        }
        break;

        case 'w': // третій кейс (Працівник)
        {
            Worker worker;
            cout << "Введіть ім'я працівника: ";
            cin >> worker.name;
            cout << "Введіть зарплату працівника: ";
            cin >> worker.salary;
            worker.printInfo();
        }
        break;

        case 's':// четвертий кейс (Студент)
        {
            Student student;
            cout << "Введіть ім'я студента: ";
            cin >> student.name;
            cout << "Введіть вік студента: ";
            cin >> student.age;
            student.printInfo();
        }
        break;
        default:
            cout << "Невірний вибір." << endl;
        }
        cout << "Продовжити введення? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');
}