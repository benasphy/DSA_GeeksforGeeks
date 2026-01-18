#include <iostream>
using namespace std;

struct student{
    char name[20];
    int age;
    char dep[20];
    student *prev; //Doubly linked list
    student *next;

};
    student* start = nullptr;
void insert_beg(student* p){
    if (start == nullptr){
        start = p;

    }

    else{
        student* temp = start;

        start = p;
        temp->prev = p;
        p->next = temp;
    }
}