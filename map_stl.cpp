#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >>q;
    map<string,int> m; 
    while(q!=0){
        int mark,type;
        string std;
        cin >>type>>std;
        if(type == 1){
            cin >>mark;
            m[std] += mark;
        }
        else if(type == 2){
            m.erase(std);
        }
        else{
            cout <<m[std]<<endl;
        }
        q--;
        }
    
}