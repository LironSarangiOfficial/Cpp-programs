#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int val){
        this->data = val;
        this->next = nullptr;
    }
};

void insertAtTail(node* &head,int data){

    if (head == nullptr){
        head = n;
        return;
    }

    node* n = new node(data);
    
    node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtHead(node* &head,int data){
    node* n = new node(data);
    n->next = head;
    head = n;
}

void insert

int main(){
    
    return 0;
}