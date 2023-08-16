#include<bits/stdc++.h>
using namespace std;

char* Stack, top=0, n;

void push(char x);
char pop();
void display();

int main(){
    string s;
    cin >> s;
    int len = s.length();
    n = len;
    Stack = new char[n];
    char open[3] = {'[', '(', '{'};
    char close[3] = {']', ')', '}'};
    for(int i=0; i<len; i++){
        int flag = 1;
        for(int j=0; j<3; j++){
            if(s[i] == open[j]){
                push(s[i]);
                break;
            }
            else if(s[i] == close[j]){
                char x = pop();
                if(x == open[j]){
                    flag = 1;
                    break;
                }
                else{
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 0){
            break;
        }
    }
    if(top != 0){
        cout << "Input String is not valid" << endl;
    }
    else{
        cout << "Input String is valid" << endl;
    }
}

void push(char x){
    Stack[top] = x;   
    top++;
}

char pop(){
    top--;
    char a = Stack[top];
    return a;   
}