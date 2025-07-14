#include <iostream>
using namespace std;

int binaryToDec(int binNum){
    int ans=0, pow=1;
    while(binNum>0){
        int rem=binNum%10;
        ans += rem*pow;
        binNum/=10;
        pow*=2;
    }
    return ans;
}

int main(){
    int binNum=1101010111;
        cout<<binaryToDec(binNum)<<endl;
        return 0;
}