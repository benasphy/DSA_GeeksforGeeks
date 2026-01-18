#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* next;
};

Node* top = NULL;

int isEmpty() {
    return top == NULL;
}

void push(char ch) {
    Node* newNode = new Node;
    newNode->data = ch;
    newNode->next = top;
    top = newNode;
}

char pop() {
    if (isEmpty()) {
        return '\0';
    }

    Node* temp = top;
    char value = temp->data;
    top = top->next;
    delete temp;

    return value;
}

void reverseString(char str[]){
    int i = 0;
    while (str[i] != '\0'){
        push(str[i]);
        i++;
    }

    i = 0;
    while (!isEmpty()){

        str[i] = pop();
        i++;
    }
}

int main() {
    char str[100];

    cout << "Enter string: ";
    cin >> str;

    reverseString(str);

    cout << "Reversed string: " << str << endl;

    return 0;
}
