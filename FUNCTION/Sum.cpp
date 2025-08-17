#include <iostream>
using namespace std;

int Sum(int n){
    int sum = 0;
    for(int i = 0;i <= n;i++){
        sum += i;
    }
    return sum;
}

int main(){
    int x;
    cout<<"Enter first no : ";
    cin>>x;
    

    cout<<"The sum is : "<<Sum(x)<<endl;

    return 0;
}