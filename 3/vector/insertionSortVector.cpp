#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> vec, int n){
    int key, j;
    for(int i=0; i<n; i++){
        key = vec[i];
        j = i - 1;
        while(j>=0 && vec[j] > key){
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1] = key;
    }
    cout << "After Sorting the vector the elemets are : ";
    for(int i=0; i<n; i++){
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
    insertionSort(vec, x);
}