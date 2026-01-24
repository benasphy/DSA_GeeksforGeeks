#include <iostream>
using namespace std;

// creating data structure for SLL
struct student {
    char name[20];
    int age;
    char dep[20];
    student* next;   // self-referential
};

student* start = nullptr;
void student_beg(student *p){
    if(start == nullptr){

    p->next = nullptr;
    start = p;
    }

    else{
        p->next = start;
        start = p;
    }
}

int main() {
    student* p = new student;

    cout << "Enter name: ";
    cin >> p->name;

    cout << "Enter age: ";
    cin >> p->age;

    cout << "Enter department: ";
    cin >> p->dep;

    student_beg(p);

    cout << "\nStudents List:\n";

    return 0;
}



