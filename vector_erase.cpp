#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, temp;
vector<int> v;
cin >> N;

// fill vector
for(int i = 0; i < N; i++){
    cin >> temp;
    v.push_back(temp);
}

// remove item specified in 3rd line
cin >> temp;    
if( temp < v.size() )
    v.erase(v.begin() + temp - 1); 

// remove range specified in 4th line
int a, b;
cin >> a >> b;    

if( a < b   &&    b < v.size() )
    v.erase(v.begin() + a - 1, v.begin() + b - 1);

// print out the vector size and elements
cout << v.size() << endl;
for(auto _v : v)
    cout << _v << " ";
cout << endl;

return 0;
}
