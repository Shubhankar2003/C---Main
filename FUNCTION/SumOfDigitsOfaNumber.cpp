#include <iostream>
using namespace std;


int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    
    int digitSum = 0;

    while(num > 0){
        int lasDigit = num % 10;
        num = num/10;
        digitSum = digitSum + lasDigit;
    }
    cout<<"The sum of digits : "<<digitSum;
    return 0;
}