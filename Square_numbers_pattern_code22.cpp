#include <iostream>
using namespace std;

int main(){
    int size;
    cout <<"Enter number\n";
    cin>>size;
    
    int n=1;
    for (int i=0; i<size; i++){
        for( int j=0; j<size; j++){
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
    return 0;
}
