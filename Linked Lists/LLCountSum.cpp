#include<iostream>
#include<stdio.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
} *first = NULL;

void Create(int A[], int n){
    int i;
    struct Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for(i = 1; i < n; i++){
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p){
    while(p != NULL){
        cout << p->data << " ";
        p = p-> next;
    }
}

int Count(struct Node *p){
    int c = 0;
    while(p != NULL){
        c++;
        p = p-> next;
    }
    return c;
}

int Sum(struct Node *p){
    int sum = 0;
    while(p != NULL){
        sum += p -> data;
        p = p -> next;
    }
    return sum;
}

int main(){
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Create(A, sizeof(A)/sizeof(A[0]));
    Display(first);
    cout << endl;
    cout << "There are " << Count(first) << " nodes in the linked list.";
    cout << endl;
    cout << "The sum of all the nodes in the linked list is: " << Sum(first);
}
