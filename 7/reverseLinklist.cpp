#include<bits/stdc++.h>
using namespace std;

struct node{
    int info;
    struct node * link;
};

struct node* First = NULL;

void pushAtFirst(int x);
struct node* Create(int n);
void reverseLinkList();
void reverseLinkListClg();
void display();

int main(){
    int choice;
    cout << "This program is developed by 22CE097_ShivangPatel" << endl << endl;
    do{
        cout << "1. Insert node at front." << endl;
        cout << "2. Reverse the linked list. " << endl;
        cout << "3. Reverse the linked list Collage. " << endl;
        cout << "4. exit" << endl;
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
                reverseLinkList();
                display();
                break;
            
            case 3:
                reverseLinkListClg();
                display();
                break;

            case 4:
                break;

            default:
                cout << "Enter the valid number in choice.";
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

void reverseLinkList()
{
    struct node* pre = First;
    struct node* temp1;
    temp1 = pre->link;
    if(temp1->link == NULL){
        pre->link = NULL;
        temp1->link = pre;
        First = temp1;
        return;
    }
    else{
        struct node* temp2;
        temp2 = temp1->link;
        pre->link = NULL;
        while(temp2->link != NULL){
            temp1->link = pre;
            pre = temp1;
            temp1 = temp2;
            temp2 = temp2->link;
        }
        temp1->link = pre;
        temp2->link = temp1;
        First = temp2;
        return;
    }
}

void reverseLinkListClg()
{
    struct node* pre = NULL;
    while(First!=NULL){
        struct node* next = First->link;
        First->link = pre;
        pre = First;
        First = next;
    }
    // pre = First;
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