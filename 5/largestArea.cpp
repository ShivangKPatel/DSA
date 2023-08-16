#include<bits/stdc++.h>
using namespace std;

int largestArea(vector<int> stickLength, int n){
    int l = 0, b = 0;
    sort(stickLength.begin(), stickLength.end(), greater<int>());
    for(int i=0; i < n-1; i++){
        if(stickLength[i] == stickLength[i+1]){
            if(l < stickLength[i])
                l = stickLength[i];
            else if(b < stickLength[i])
                b = stickLength[i];
            i++;
        }
    }
    if(l > 0 && b > 0)
        return (l*b);
    else    
        return -1;
}

int largestarea(vector<int> stickLength, int n){
    int l = 0, b = 0;
    sort(stickLength.begin(), stickLength.end());
    for(int i = 0; i < n-1; i++){
        if(stickLength[i] == stickLength[i+1]){
            if(l < stickLength[i]){
                if(b < l)
                    b = l;
                l = stickLength[i];
            }
            else if(b < stickLength[i]){
                b = stickLength[i];
            }
            i++;
        }
    }
    if(l > 0 && b > 0)
        return (l*b);
    else    
        return -1;
}

int main(){
    cout << "This program is developed by 22CE097_ShivangPatel" << endl;
    int t, n;
    cout << "Enter number of test cases : ";
    cin >> t;
    while(t>0){
        cout << "Enter number of sticks : ";
        cin >> n;
        int a;
        vector<int> stickLength;
        for(int i=0; i < n; i++){
            cout << "Enter stick length of " << i+1 << " stick : ";
            cin >> a;
            stickLength.push_back(a);
        }
        //cout <<  "Area is : " <<  largestArea(stickLength, n) << endl << endl;
        cout <<  "Area is : " <<  largestarea(stickLength, n) << endl << endl;
        t--;
    }
}