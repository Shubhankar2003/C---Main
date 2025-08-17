#include <iostream>
using namespace std;

int Factorial(int n){
    int fact = 1;
    for(int i = 1;i <= n;i++){
        fact = fact*i;
    }
    return fact;
}

int main(){
    int x;
    cout<<"Enter first no : ";
    cin>>x;
    

    cout<<"The sum is : "<<Factorial(x)<<endl;

    return 0;
}