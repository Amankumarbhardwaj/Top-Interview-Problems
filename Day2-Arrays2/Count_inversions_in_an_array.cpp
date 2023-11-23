#include<bits/stdc++.h>
using namespace std;
int numberOfInversion(vector<int>&a, int n){
    //count the number of pairs:
    int cnt = 0;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(a[i]>a[j]) cnt++;
        }
    }
    return cnt;
}
int main(){
    vector<int>a={5,4,3,2,1};
    int n = 5;
    int cnt = numberOfInversion(a,n);
    cout<<"The number of inversions is: "<<cnt<<endl;
    return 0;
}