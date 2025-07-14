#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n=7, r=3;

    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nmr=factorial(n-r);

    int nCr= fact_n/(fact_r*fact_nmr);
    cout<<nCr<<endl;
    return 0;
}