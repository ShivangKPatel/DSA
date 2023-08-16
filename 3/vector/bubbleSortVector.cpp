#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> vec, int x){
    int exch;
    int last = x-1;
    cout << "Enter elements : ";
    for(int i=1; i<=x; i++){
        exch = 0;
        for(int j=0; j<last; j++){
            if(vec[j] > vec[j+1]){
                swap(vec[j], vec[j+1]);
                exch++;
            }
        }
        if(exch==0)
            break;
        else
            last--;
    }
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
}

int main(){
    int x, a;
    cout << "Enter number of element : ";
    cin >> x;
    vector<int> vec;
    for(int i=0;i<x;i++){
        cin >> a;
        vec.push_back(a);
    }
    bubbleSort(vec, x);
    return 0;
}