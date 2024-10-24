#include <iostream>

using namespace std;
class Node {
    public:
        int data;
        Node* next;
        Node(int intValue) : data(intValue), next(nullptr) {}
};

class LinkedList {
    private:
        Node* head;
    public:
        LinkedList() : head (nullptr) {}

    //insert at front
    void InsertAtFront(int intValue) {
        Node* newNode = new Node(intValue);
        newNode->next = head;
        head = newNode;

    }
    void InsertAtEnd(int intValue) {
        Node* newNode = new Node(intValue);
        if(!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp-> next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void InsertAfter(int intValue){
        if(!prevNode) {
            return;
        }
        Node* newNode = new Node(intValue);
        newNode->next = prevNode->next;
    }
};