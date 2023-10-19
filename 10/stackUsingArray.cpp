#include<bits/stdc++.h>
using namespace std;

int Stack[10], top=-1, n=10;

void push(int x);
int pop();
void display();

int main(){
    int choice;
    // cout << "Enter total number of elements : ";
    // cin >> n;
    // Stack = new int[n];
    do{
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. exit" << endl;
        cout << "Select the operation : ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                int x;
                cout << "Enter element you want to add : ";
                cin >> x;
                push(x);
                display();
                break;
        
            case 2:
                int y; 
                y = pop();
                cout << "Retrived element : " << y << endl;
                display();
                break;

            case 3:
                display();
                break;
            
            case 4:
                choice = 4;
                break;
            
            default:
                cout << "Please Select Valid number " << endl;
                break;
        }
    }while(choice!=4);
    // delete Stack;
}

void push(int x){
    if(top == n-1)
        cout << "Stack overflow" << endl;
    else{
        top++;
        Stack[top] = x;   
    }
}

int pop(){
    if(top == -1){
        cout << "Stack underflow" << endl;
        return -1;
    }
    else{
        int a = Stack[top];
        top--;
        return a;
    }
}

void display(){
    int x;
    if(top == -1){
        cout << "Stack is empty" << endl << endl;
    }
    cout << endl << endl << "Elements in stack : ";
    for(int i=top; i>=0; i--){
        cout << Stack[i] << " ";
    }
    cout << endl << endl << endl;
}