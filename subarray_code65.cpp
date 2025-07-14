#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"enter size of array ";
    cin>>n;

    int a[100];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for (int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            for(int i=st; i<end; i++){
                cout<<a[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}