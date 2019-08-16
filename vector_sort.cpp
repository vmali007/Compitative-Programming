#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin >>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int y: v){
        cout <<y<<" ";
    }
    return 0;
}