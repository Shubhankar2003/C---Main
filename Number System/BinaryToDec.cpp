#include <iostream>
using namespace std;

//Decimal to Binary conversion

int BinaryToDec(int BinNum){
    int ans = 0;
    int pow = 1;
    while(BinNum > 0){
        int rem = BinNum % 10;
        ans += (rem * pow);
        //Update
        BinNum = BinNum / 10;
        pow = pow * 2;
    }
    return ans;
}

int main(){
    int Num;     
    cout<<"Enter a decimal number : ";
    cin>>Num;
   
    cout<<"Binery no is : "<< BinaryToDec(Num)<<endl;
    
    
    return 0;
}