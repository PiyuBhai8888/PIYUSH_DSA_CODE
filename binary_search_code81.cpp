#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>a,int target){
    // vector<int> ans;
    int n=a.size();

    int st=0, end=n-1;

    while(st <= end){
        int mid= (st + end)/2;
        if(target>a[mid]){
            st=mid+1;
        }
        else if(target<a[mid]){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> a1={-1,0,3,4,5,9,12};
    int target1=4;

    cout<<binarySearch(a1,target1)<<endl;
    
    vector<int> a2={-1,0,3,5,9,12};
    int target2=3;
    
    cout<<binarySearch(a2,target2)<<endl;

    return 0;
}