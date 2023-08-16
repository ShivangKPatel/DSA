#include<bits/stdc++.h>
using namespace std;

void selectionSort(){
    int n;
    cout << "Enter number of element : ";
    cin >> n;
    int arr[n], exch, min_index;
    cout << "Enter element : ";
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }
    for(int i=0; i < n-1; i++){
        min_index=i;
        for(int j=i+1; j < n; j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }
        if(min_index != i)
            swap(arr[i], arr[min_index]);
    }
    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    selectionSort();
    return 0;
}