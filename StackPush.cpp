#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void push(Node*& top, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << value << " pushed" << endl;
}

void display(Node* top) {
    cout << "Stack (TOP -> bottom): ";
    for (Node* curr = top; curr != NULL; curr = curr->next)
        cout << curr->data << " ";
    cout << endl;
}

int main() {
    Node* top = NULL;
    push(top, 5);
    push(top, 6);
    push(top, 2);
    push(top, 9);
    display(top);
    return 0;
}
