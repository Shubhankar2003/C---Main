#include <iostream>
using namespace std;

int Min(int a,int b){   //parameters
    if( a < b){
        return a;
    } 
    else{
        return b;
    }
     
}

int main(){
    int x,y;
    cout<<"Enter first no : ";
    cin>>x;
    cout<<"Enter second no : ";
    cin>>y;

    cout<<"Min no is : "<<Min(x,y)<<endl;   //argument

    return 0;
}