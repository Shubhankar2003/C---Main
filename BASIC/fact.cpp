#include <iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int fact=1;
    for(int i = n;i>=2;i--){
        fact=fact*i;
    }
    cout<<fact<<endl;
    return 0;
}