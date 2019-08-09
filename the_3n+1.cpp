#include<bits/stdc++.h>
using namespace std;

int max(int i,int count){
	(i & 1)? i = 3*i+1 : i = i/2;
			count++;
	if (i != 1)
		max(i,count);
		
	else
		return count;
	
}

int main(){
	int t;
	cin >>t;
	while(t != 0){
		int m,n;
		cin >> m >> n;
		vector<int>res;
		if (m > n)
			cout <<"INVALIDE INPUT";
		else{
			for(int a = m; a < n ; a++){
				int k = 1;
				res.push_back(max(a,k));
			}
		}
		sort(res.begin(),res.end());
		cout << m <<" "<< n <<" "<<res.back()<<endl;
		
	t--;
	}

}
