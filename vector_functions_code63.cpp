#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(5);

    cout<<" after push back size= "<<vec.size()<<endl;

    vec.pop_back();

    for(int i: vec){
        cout <<i<<endl;
    }

    cout<<"at vector function "<<vec.at(0)<<endl;
    // if we are print more than of the position we get error
    cout<<"at vector function "<<vec.at(3)<<endl;

    return 0;
}