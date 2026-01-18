#include <iostream>
using namespace std;
struct student {
    char name[20];
    int age;
    char dep[20];
    student* next;   // self-referential
};

student* start = nullptr;

void insert_after(int c, student* p){
    student *q;
    q = start;

    for (int i = 1; i<c; i++){
        q = q->next;
    }
    if(q == nullptr){
            cout<< "less than" "<<c<<" "nodes";
        }
    p->next = q->next;
    q->next = p;
        
}