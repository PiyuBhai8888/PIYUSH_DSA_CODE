#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;

    int a[10000];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int maxSum=INT_MIN;
    for(int st=0; st<n; st++ ){
        int currsum=0;
        for(int end=st; end<n; end++){
            currsum += a[end];
            maxSum= max(currsum,maxSum);
        }
    }
    cout<<"mxaimum subarray sum is "<<maxSum<<endl;
    return 0;
}