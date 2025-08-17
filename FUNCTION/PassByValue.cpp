#include <iostream>
using namespace std;

int sum(int a,int b){
    a = a + 10;     //15
    b = b + 10;     //14
    return a+b;     //29
}

int main(){
    int x=5;
    int y=4;

    cout<<"The sum is : "<<sum(x,y)<<endl;      //29

    cout<<"Value of x : "<<x<<endl;     //5
    cout<<"Value of y : "<<y<<endl;     //4
    return 0;
}