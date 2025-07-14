#include <iostream>
using namespace std;

int linerSearch(int a[],int n ,int target){
    for(int i=0; i<n; i++){
        if(a[i]==target){
            return i;
        }
    }
    return (-1);
    
}

int main(){
    int a[]={4,2,7,8,1,2,5};
    int n=7;
    int target =5;
    
    cout<<"the target index is: " <<linerSearch(a, n, target)<<endl;

    return 0;
}