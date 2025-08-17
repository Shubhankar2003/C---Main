#include <iostream>
using namespace std;

int main(){
    int x = 143;
    int rev=0;
    
    while(x>0){
        int rem = x%10; //Get last digit
        rev = rev * 10 + rem;   //Shift left and add digit
        x = x/10;   //Remove last digit
        
    }
    cout<<"Reverse of the integer : "<<rev<<endl;
    return 0 ;
}