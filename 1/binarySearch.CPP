#include<bits/stdc++.h>
using namespace std;

//Using iterative function
int binarySearch(int Arr[], int n, int key){
    int l = 0;
    int h = n-1;
    int mid = 0;
    while(l<=h){
        mid = (l+h)/2;
        if(Arr[mid] == key){
            return mid;
        }
        else if(Arr[mid] < key){
            l = mid+1;
        }
        else if(Arr[mid] > key){
            h = mid-1;
        }
    }
    return -1;
}

//Using recursive function
int binarySearch(int Arr[], int n, int key, int l, int h){
    int mid = (l+h)/2;
    if(l>h){
        return -1;
    }
    else if(Arr[mid] == key){
        return mid;
    }
    else if(Arr[mid] < key){
        return binarySearch(Arr, n, key, mid+1, h);
    }
    else if(Arr[mid] > key){
        return binarySearch(Arr, n, key, l, mid-1);
    }
}

int main(){
    int n;
    int key;
    cout << "This program is developed by 22CE097_ShivangPatel" << endl << endl;
    cout << "Enter number of elements : ";
    cin >> n;
    int Arr[n];
    cout << "Enter array in sorted form " << endl << endl;
    for(int i=0; i < n; i++){
        cout << "Enter element A[" << i << "] : " ;
        cin >> Arr[i];
        cout << endl;
    }
    cout << "Enter element you want to find : ";
    cin >> key;

    int result = binarySearch(Arr, n, key, 0, n-1); //Using iterative function or recursive function
    if(result == -1){
        cout << "Element does not found in array." << endl;
    }
    else{
        cout << "Element founded on index number " << result << endl;
    }
    return 0;
}