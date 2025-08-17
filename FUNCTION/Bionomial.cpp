#include <iostream>
using namespace std;

long long int factorial(long long int n){
    long long int fact = 1;
    for(long long int i = 1;i <= n; i++){
        fact = fact * i;
    }
    return fact;
} 
long long int ncr(long long int n,long long int r){
    long long int fact_n = factorial(n);
    long long int fact_r = factorial(r);
    long long int fact_nmr = factorial(n-r);

    return fact_n/(fact_r * fact_nmr);
}


int main(){
    long long int n,r;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of r : ";
    cin>>r;

    cout<<"The valu of ncr is : "<<ncr(n,r)<<endl;
    return 0;
}