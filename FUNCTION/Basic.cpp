#include <iostream>

using namespace std;

//Function definition
int printHello(){
    cout<<"Radhe Radhe";
    return 3;
}
int main(){
    //Function call 
    printHello();
    int val=printHello();
    cout<<"\nValue is : "<<val<<endl;
    return 0;
}
