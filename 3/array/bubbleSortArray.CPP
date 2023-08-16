#include<bits/stdc++.h>
using namespace std;

void bubbleSort(){
    int n;
    cout << "Enter number of element : ";
    cin >> n;
    int arr[n], exch, last = n;
    cout << "Enter element : ";
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }
    for(int i=1; i <=n; i++){
        exch = 0;
        for(int j=0; j<last; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                exch++;
            }
        }
        if(exch==0)
            break;
        else
            last--;
    }
    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
}   

int main(){
    bubbleSort();
    return 0;
}