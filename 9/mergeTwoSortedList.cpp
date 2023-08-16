#include<bits/stdc++.h>
using namespace std;

struct node{
    int info;
    struct node * link;
};

struct node* FirstList = NULL;
struct node* SecondList = NULL;

struct node* Create(int n);
void pushAtFirst(int x);
void pushAtSecond(int x);
void mergerList();
void displayFirst();
void displaySecond();

int main(){
    int choice;
    cout << "This program is developed by 22CE097_ShivangPatel" << endl << endl;
    do{
        cout << "1. Insert First node at front." << endl;
        cout << "2. Insert Second node at front." << endl;
        cout << "3. Merge linklist. " << endl;
        cout << "4. exit" << endl;
        cout << "Select operation : ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                int x;
                cout << "Enter a element in first node : ";
                cin >> x;
                pushAtFirst(x);
                displayFirst();
                break;

            case 2:
                int y;
                cout << "Enter a element in second node : ";
                cin >> y;
                pushAtSecond(x);
                displaySecond();
                break;
                
            case 3:
                mergerList();
                break;
            
            case 4:
                break;
        }
    }while(choice!=4);
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
    if(FirstList == NULL){
        FirstList = temp;
    }
    else{
        temp->link = FirstList;
        FirstList = temp;
    }
}

void pushAtSecond(int x){
    struct node* temp = Create(x);
    if(SecondList == NULL){
        SecondList = temp;
    }
    else{
        temp->link = SecondList;
        SecondList = temp;
    }
}