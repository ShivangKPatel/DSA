#include<bits/stdc++.h>
using namespace std;

struct node{
    int info;
    struct node * link;
};

struct node* First = NULL;
struct node* push(int x);
struct node* Create(int n);
int pop(struct node* first);
void display();

int main(){
    int choice;
    struct node* first;
    do{
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Select operation : ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                int x;
                cout << "Enter a element you want to add  : ";
                cin >> x;
                first=push(x);
                //Display();
                break;
        
            case 2: 
                int y;
                y = pop(first);
                if(y != 0)
                    cout << y << endl;
                break;

            case 3:
                display();
                break;

            default:
                break;
        }
    }while(choice!=4);
    return 0;
}

struct node* Create(int x){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node*));
    temp->info = x;
    temp->link = NULL;
    return temp;
}

struct node* push(int x){
    struct node* temp = Create(x);
    if(First == NULL){
        First = temp;
    }
    else{
        temp->link = First;
        First = temp;
    }
    return temp;
}

int pop(struct node* first){
    int x;
    if(First==NULL){
        cout << "Stack is underflow" << endl;
        return 0;
    }
    x = First->info;
    First = first->link;
    return x;
}

void display(){
    struct node* temp1 = First;
    cout << endl << "Elemets : ";
    while(temp1!=NULL){
        cout << temp1->info << " ";
        temp1=temp1->link;
    }
    cout << endl << endl;
}