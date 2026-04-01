#include<iostream>
using namespace std;

struct Stack{
    int size, top, *S;
};

void Create(struct Stack *st){
    cout << "Enter size of the array: " << flush;
    cin >> st->size;
    st->top = -1;
    st->S = new int[st->size];
    cout << "Stack of size " << st->size << " has been created." << endl;
    
}

void Display(struct Stack st){
    int i;
    cout << "These are the elements of the stack: " << endl;
    for(i = st.top; i>=0; i--){
        cout << st.S[i] << " ";
    }
    cout << endl;
}

void Push(struct Stack *st){
    int i;
    if(st->top == st->size-1){
        cout << "Stack overflow." << endl;
    }
    else{
        int x;
        cout << "Enter number to be pushed: " << flush;
        cin >> x;
        st->top++;
        st->S[st->top] = x;
    }
}

void Pop(struct Stack *st){
    if(st->top == -1){
        cout << "Stack underflow." << endl;
    }
    else{
        int x = st->S[st->top--];
        cout << "Element popped was: " << x << endl;
    }
    
}

int main(){
    struct Stack st;
    
    Create(&st);
    Push(&st);
    Push(&st);
    Push(&st);
    Push(&st);
    Push(&st);
    
    
    Display(st);
    Pop(&st);
    Pop(&st);
    Display(st);
    delete[] st.S;
    return 0;
}
