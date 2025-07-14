#include <iostream>

using namespace std;
int main(){
    int n , sum;
    cout<<"Enter of number\n";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(n % 2 !=0){
            cout <<i<<endl;
            sum= sum +i;
            cout<<"Sum of odd number: "<<sum<<endl;
        }
    }
    return 0;
}