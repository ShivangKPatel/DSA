#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* prev, *next; //Self refrencial Structure => Struct which point it self.
};

struct node* L = NULL, *R = NULL;

struct node* create(int);
void insertNodeAtEnd(int);
void insertNodeAtFront(int);
void deleteNodeFromEnd();
void deleteNodeFromFront();
void insertBefore(int, int);
void insertAfter(int, int);
void find(int);
void display();

int main(){
    int choice;
    do{
        cout << "1. Insert node at end." << endl;
        cout << "2. Insert node at front." << endl;
        cout << "3. Delete end" << endl;
        cout << "4. Delete front" << endl;
        cout << "5. Find the element" << endl;
        cout << "6. Insert node before a specific element." << endl;
        cout << "7. Insert node after a specific element." << endl;
        cout << "8. Display." << endl;
        cout << "9. Exit." << endl;
        //cout << "3. Insert node at end." << endl;
        cout << "Select the operation : ";
        cin >> choice;
        switch (choice)
        {
            case 1: 
                int a;
                cout << "Enter a number you want to add : ";
                cin >> a;
                insertNodeAtEnd(a);
                display();
                break;

            case 2: 
                int b;
                cout << "Enter a number you want to add : ";
                cin >> b;
                insertNodeAtFront(b);
                display();
                break;

            case 3: 
                deleteNodeFromEnd();
                display();
                break;

            case 4: 
                deleteNodeFromFront();
                display();
                break;

            case 5:
                int c;
                cout << "Enter a element you want to find : ";
                cin >> c;
                find(c);
                break;

            case 6:
                int d, e;
                cout << "Enter a element you want to add : ";
                cin >> d;
                cout << "Enter a element before you want to add " << d << " : ";
                cin >> e;
                insertBefore(d, e);
                display();
                break;

            case 7:
                int f, g;
                cout << "Enter a element you want to add : ";
                cin >> f;
                cout << "Enter a element after you want to add " << f << " : ";
                cin >> g;
                insertAfter(f, g);
                display();
                break;

            case 8:
                display();
                break;

            case 9:
                break;

            default:
                cout << "Please enter a valid number" << endl << endl;
                break;
        }
    }while(choice!=9);
    return 0;
}

struct node* create(int x){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL; 
    temp->prev = NULL;
    return temp;
}

void insertNodeAtEnd(int x){
    struct node *temp = create(x);
    if(R == NULL){
        L = temp;
        R = temp;
    }
    else{
        R->next = temp;
        temp->prev = R;
        R = temp;
    }
}

void insertNodeAtFront(int x){
    struct node *temp = create(x);
    if(R == NULL){
        L = temp;
        R = temp;
    }
    else{
        temp->next = L;
        L->prev = temp;
        L = temp;
    }
}

void deleteNodeFromFront(){
    struct node* temp = L;
    if(temp==NULL){
        cout << "Linklist is empty" << endl;
    }
    else if(temp->next == NULL){
        free(temp);
        L = NULL;
        R = NULL;
    }
    else{
        L = L->next;
        L->prev = NULL;
        free(temp);
    }
}

void deleteNodeFromEnd(){
    struct node* temp = R;
    if(temp==NULL){
        cout << "Linklist is empty" << endl;
    }
    else if(temp->prev == NULL){
        free(temp);
        L = NULL;
        R = NULL;
    }
    else{
        R = R->prev;
        R->next = NULL;
        free(temp);
    }
}

void find(int x){
    struct node* temp1 = L; 
    struct node* temp2 = R;
    int flag = 1;
    if(L == NULL){
        flag = 0;
    }
    while(temp1->data != x && temp2->data != x){
        if((temp1==temp2) || (temp1->next == temp2 && temp2->prev == temp1)){
            flag = 0;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->prev;
    }
    if(flag == 1)
        cout << endl << "Element founded" << endl << endl;
    else   
        cout << endl << "Element not founded" << endl << endl;
}

struct node* findLocation(int x){
    struct node* trav = L;
    if(L == NULL)
        return NULL;
    while(trav->data != x){
        trav = trav->next;
        if(trav==NULL){
            break;
        }
    }
    return trav;
}

void insertBefore(int x, int y){
    struct node* trav = findLocation(y);
    if(trav != NULL){
        struct node* temp = create(x);
        temp->next = trav;
        if(trav->prev != NULL){
            trav->prev->next = temp;
            temp->prev = trav->prev;
        }
        else{
            L = temp;
        }
        trav->prev = temp;
    }
    else   
        cout << endl << "Element not founded" << endl;
}

void insertAfter(int x, int y){
    struct node* trav = findLocation(y);
    if(trav != NULL){
        struct node* temp = create(x);
        temp->prev = trav;
        if(trav->next != NULL){
            temp->next = trav->next;
            trav->next->prev = temp;
        }
        else{
            R = temp;
        }
        trav->next = temp;
    }
    else   
        cout << endl << "Element not founded" << endl;
}

void display(){
    struct node* trav = L;
    cout << endl << "Elements : ";
    while(trav != NULL){
        cout << trav->data << " ";
        trav = trav->next;
    }
    cout << endl << endl;
}