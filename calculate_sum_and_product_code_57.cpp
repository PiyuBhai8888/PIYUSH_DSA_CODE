#include <iostream>
using namespace std;

void sumProduct(int a[], int n){

    int sum=0;
    int product=1;

    for (int i=0; i<n; i++){
        sum += a[i];
        product *= a[i];
    }
    cout<<"sum of array is "<<sum<<endl;
    cout<<"product of array is "<<product<<endl;
}

int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int a[100];
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sumProduct(a,n);

    return 0;
}