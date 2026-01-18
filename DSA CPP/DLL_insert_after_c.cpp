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

void insert_after(int c, student* p){
    student* temp = start;

    for(int i = 0; i<c-1; i++){
        temp = temp->next;
    }

    p->next = temp->next;
    temp->next->prev = p;
    temp->next = p;
    p->prev = temp;
}