#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    struct node* lptr;
    struct node* rptr;
};

struct node* root = NULL;
vector<int> v;

struct node* create(int x){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->val = x;
    temp->lptr = NULL;
    temp->rptr = NULL;
    return temp;
}

struct node* generateBinaryTree(struct node* newNode, int i){
    if(i == v.size()){
        return NULL;
    }
    else{
        if(root->val < v[i]){
            return generateBinaryTree(root->rptr, i+1);
        }
        else if(root->val >= v[i]){

        }
    }
}

int main(){
    v.push_back(4);
    v.push_back(2);
    v.push_back(7);
    v.push_back(1);
    v.push_back(3);
    root = generateBinaryTree(root, 0);
}