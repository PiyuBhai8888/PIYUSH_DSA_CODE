#include <iostream>
using namespace std;

int sumOfDigits(int num){
    int digSum=0;

    while(num>0){
        int lastDig=num%10;
        num/=10;
        digSum += lastDig;
    }
    return digSum;
}
int main(){
    cout<<"sum is "<<sumOfDigits(54942)<<endl;
    return 0;
}