#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    struct node* left;
    struct node* right;
};

struct node* root;

struct node* create();
void preorderTrav(struct node* trav);

int main(){
    root = create();
    cout << "Tree elements are : "; 
    preorderTrav(root);
}

struct node* create(){
    int x;
    struct node* trav;
    cout << "Enter a value (-1 no node) : ";
    cin >> x;
    if(x == -1)
        return NULL;
    trav = (struct node*)malloc(sizeof(struct node));
    trav->val = x;
    cout << "Add left side of " << x << endl;
    trav->left = create();
    cout << "Add right side of " << x << endl;
    trav->right = create();
    return trav;
}

void preorderTrav(struct node* trav){
    if(trav){
        cout << trav->val << " ";
        preorderTrav(trav->left);
        preorderTrav(trav->right);
    }
}