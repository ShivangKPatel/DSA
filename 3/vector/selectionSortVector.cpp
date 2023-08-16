#include<bits/stdc++.h>
using namespace std;


void selectionSort(vector<int> vec, int n){
    int exch, min_index;
    for(int i=0; i < n-1; i++){
        min_index=i;
        for(int j=i+1; j < n; j++){
            if(vec[min_index] > vec[j]){
                min_index = j;
            }
        }
        if(min_index != i)
            swap(vec[i], vec[min_index]);
    }
    for(int i=0; i < n; i++){
        cout << vec[i] << " ";
    }
}

int main(){
    int x, a;
    cout << "Enter number of element : ";
    cin >> x;
    vector<int> vec;
    for(int i=0;i<x;i++){
        cout << "Enter Element Array [" << i << "] : ";
        cin >> a;
        vec.push_back(a);
    }
    selectionSort(vec, x);
}