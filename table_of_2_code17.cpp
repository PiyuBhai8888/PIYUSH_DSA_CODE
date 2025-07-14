#include <iostream>
using namespace std;

int main(){

    int i,n, sum;
    cout <<"Enter any number for table\n";
    cin>>n;
    //if  we create a table of any number 
    for (i=1; i<21; i++){
        sum=n*i;
        cout << n << " * " << i << " = " << (n * i)<<endl;
    }
    return 0;
}