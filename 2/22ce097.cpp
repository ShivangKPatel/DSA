#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, n, k, c;
    int maxi = 0;
    int total, count;
    cout << "This prorgram is developed by 22CE097_ShivangPatel " << endl;
    cin >> a;
    while(a!=0){
        cin >> n >> c >> k;
        int w[n];
        for(int i=0;i<n;i++){
            cin >> w[i];
        }
        for(int i=0;i<n;i++){
            total = 0;
            count = 0;
            for(int j=i; j<n; j++){
                total = total + w[j];
                count++;
                if(total > c){
                    break;
                }
                else if(total >= k and total <= c){
                    maxi = max(maxi, count);
                }
            }
        }
        cout << maxi << endl << endl;
        a--;
    }
}