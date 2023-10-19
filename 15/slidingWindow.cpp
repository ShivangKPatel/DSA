#include<bits/stdc++.h>
using namespace std;

void usingUnorderdSet(int ele[], int n, int k){
    unordered_set<int> Set;
    for(int i = 0;i < n-k+1; i++){
        for(int j = i; j < i+k; j++){
            if(Set.find(ele[j]) == Set.end()){
                Set.insert(ele[j]);
            }
        }
        cout << Set.size() << " ";
        Set.clear();
    }
}

int main(){
    cout << "This program is prepared by 22CE097_ShivangPatel." << endl << endl;
    int n, k;
    cin >> n >> k;
    int ele[n];
    for(int i=0; i<n; i++){
        cin >> ele[i];
    }
    usingUnorderdSet(ele, n, k);
    return 0;
}