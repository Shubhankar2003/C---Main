#include <iostream>
using namespace std;

//Decimal to Binary conversion

int decToBinary(int decNum){
    int ans = 0;
    int pow = 1;
    while(decNum > 0){
        int rem = decNum % 2;
        ans =ans + (rem * pow);
        //Updation
        decNum = decNum / 2;
        pow = pow * 10;
    }
    return ans;
}

int main(){
    int decNum;     
    cout<<"Enter a decimal number : ";
    cin>>decNum;
   
    cout<<"Binery no is : "<<endl;
    for(int i = 1;i<=decNum;i++){
        cout<<decToBinary(i)<<endl;
    }
    
    return 0;
}