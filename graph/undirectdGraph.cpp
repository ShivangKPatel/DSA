#include<bits/stdc++.h>
using namespace std;

int graph[8][8];
int Set[4];
int k;

void constructGraph(){
    int x;
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++){
            cout << "Enter the value of " << i << " and " << j << " ";
            cin >> graph[i][j];
        }
    }
}


void findAdjesent(int v){
    k=0;
    for(int j = 1; j <= 3; j++){
        if(graph[v][j] == 1){
            Set[k] = j;
            k++;
        }
    }
}

void BFS(int v){
    int u = v;
    vector<int> visited(3,0);
    visited[v] = 1;
    while(1){
        findAdjesent(v);
        for(int i = 0; i < k; i++){
            if(visited[i] == 0){
                
            }
        }
        break;
    }
    cout << endl;
}

int main(){
    constructGraph();   
    BFS(1);
    BFS(2);
    BFS(3);
    return 0;
}