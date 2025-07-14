#include<iostream>
#include<vector>
using namespace std;

int recBinarySearch(vector <int> arr,int target,int start,int end){

    if(start <= end){
        int mid = start+(end - start)/2;
            if( target > arr[mid]){
                return recBinarySearch(arr,target,mid+1,end);
            }
            else if( target < arr[mid]){
                return recBinarySearch(arr,target,start, mid-1);
            }
            else{
                return mid;
            }
    }
    return -1;\
}

int main(){

    vector<int> arr1={-1,0,3,4,5,9,12};
    int target1=0;
    int start = 0;
    int end = arr1.size() - 1;

    cout<<recBinarySearch(arr1,target1, start , end)<<endl;
}