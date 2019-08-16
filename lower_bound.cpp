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
    int t;
    cin >>t;
    vector<int>::iterator low;
    while(t > 0){
        int temp;
        cin >>temp;

        low = std::lower_bound(v.begin(), v.end(), temp);
        if(v[(low-v.begin())] == temp)
            cout <<"Yes "<<(low - v.begin()+1)<<endl;
        else
            cout <<"No "<<(low - v.begin() + 1)<<endl;
        
        t--;
    }
}
