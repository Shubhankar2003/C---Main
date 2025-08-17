#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of rows : ";
    cin>>n;

    for(int i = 0; i < n; i++){
        //Spaces
        for(int j = 0; j < n-i-1; j++){
            cout<<" ";
        }
        //Numbers
        for(int j = 0; j < i+1 ; j++){
            cout<<j+1;
        }
        //Right num triangle
        for(int j = i; j >0 ; j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}