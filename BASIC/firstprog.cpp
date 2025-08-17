#include<iostream>
using namespace std;
int main(){
    cout<<"Radhe Radhe"<<endl;
    int x=5;
    cout<<sizeof(x)<<endl;
    char grade='R';
    cout<<grade<<endl;

    float PI = 3.14f;
    cout<<PI<<"\n";

    bool isSafe=false;          //bool returns true or false value in binary number : true--> 1; false--> 0 
    cout<<isSafe<<endl;
    //Type casting

    //Convertion(implicit)
    char gd='A';
    int value = gd;
    cout<<value<<"\n";

    //Casting(explicit)

    double price = 100.99;
    int newprice = (int)price;
    cout<<newprice<<"\n";

    //input
    int num;
    cout<<"Enter the value: ";
    cin>>num;
    cout<<"The value is : "<<num<<"\n";


    //Ternary statement

    int t=45;
    cout<<(t >= 0 ? "positive" : "negative");

    //while loop

    int s=1;
    while(s<=6){
        cout<<" \nRadhe Radhe";
        s++;
    }
    //For loop
    int sum = 0;
    for(int i=0;i<6;i++){
        sum +=i;
    }
    cout<<"\nSum = "<<sum;
    return 0;
}