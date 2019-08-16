#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >>q;
    set<int> s; 
    while(q!=0){
        int x,y;
        cin >>y>>x;
        if(y == 1)
            s.insert(x);
        else if(y == 2)
            s.erase(x);
        else
            s.find(x) == s.end() ? cout<<"No"<<endl : cout<<"Yes"<<endl;
        
        q--;
        }
    
}