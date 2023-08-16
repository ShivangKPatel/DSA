#include<bits/stdc++.h>
using namespace std;

//Using iterative function
int linearSearch(int Arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(Arr[i] == key){
            return i;
        }
    }
    return -1;
}

//Using recursive function
int linearSearch(int Arr[], int n, int key, int i){
    if(i>n){
        return -1;
    }
    else if(Arr[i] == key){
        return i;
    }
    else if(Arr[i] != key){ 
        return linearSearch(Arr, n, key, ++i);
    }
}

int main(){
    int n;
    int key;
    cout << "This program is developed by 22CE097_ShivangPatel" << endl << endl;
    cout << "Enter number of elements : ";
    cin >> n;
    int Arr[n];
    for(int i=0; i < n; i++){
        cout << "Enter element A[" << i << "] : " ; 
        cin >> Arr[i];
    }

    cout << "Enter element you want to find : ";
    cin >> key;

    int result = linearSearch(Arr, n, key);
    if(result == -1){
        cout << "Element does not found in array." << endl;
    }
    else{
        cout << "Element founded on index number " << result << endl;
    }
    return 0;
}