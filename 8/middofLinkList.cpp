#include<bits/stdc++.h>
using namespace std;

struct node{
    int info;
    struct node * link;
};

struct node* First = NULL;

struct node* Create(int n);
void pushAtFirst(int x);
void prtFromMiddle();
void display();

int main(){
    int choice;
    cout << "This program is developed by 22CE097_ShivangPatel" << endl << endl;
    do{
        cout << "1. Insert node at front." << endl;
        cout << "2. Display linklist from middle." << endl;
        cout << "3. exit" << endl;
        cout << "Select operation : ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                int x;
                cout << "Enter a element you want to add  : ";
                cin >> x;
                pushAtFirst(x);
                display();
                break;

            case 2:
                prtFromMiddle();
                break;
            
            case 3:
                break;
        }
    }while(choice!=3);
    return 0;
}

struct node* Create(int x){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node*));
    temp->info = x;
    temp->link = NULL;
    return temp;
}

void pushAtFirst(int x){
    struct node* temp = Create(x);
    if(First == NULL){
        First = temp;
    }
    else{
        temp->link = First;
        First = temp;
    }
}

void prtFromMiddle()
{
    struct node* trav = First;
    int cnt = 1;
    int pos = 1;
    while(trav->link != NULL){
        cnt++;
        trav=trav->link;
    }
    trav=First;
    while(pos!=(cnt/2+1)){
        trav = trav->link;
        pos++;
    }
    cout << endl << "Elements : " ;
    while(trav != NULL){
        cout << trav->info << " ";
        trav = trav->link;
    }
    cout << endl << endl;
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