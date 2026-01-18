#include <iostream>
using namespace std;

// creating data structure for SLL
struct student {
    char name[20];
    int age;
    char dep[20];
    student* next;   // self-referential
};

int main() {
    student* start = nullptr;
    student* p;

    p = new student;

    cout << "Enter the name of the student:\n";
    cin >> p->name;

    cout << "Enter your age:\n";
    cin >> p->age;

    cout << "Enter your department:\n";
    cin >> p->dep;

    p->next = nullptr;   // inserting at end

    start = p;  // first node

    return 0;
}
