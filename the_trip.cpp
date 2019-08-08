#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<float>result;
    while(1){
    int n;
    float sum =0,avg,trip = 0;
    cin >>n;
    if (n==0)
        break;
    float rs[n];
    for(int i = 0;i < n;i++){
        cin >>rs[i];
        sum += rs[i];
    }
    avg = sum/n;
    avg = ((float )((int)(avg * 100))) / 100;
    for(int i = 0;i<n;i++){
        if (avg > rs[i]){
            trip += avg - rs[i];
        }    
    }
    result.push_back(trip);
    }
    for(float x: result)
        printf("$%.2f\n",x);
}