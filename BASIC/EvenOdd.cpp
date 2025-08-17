#include <iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the number : ";
cin>>n;
int sum = 0;
for(int i = 0;i < n; i++){
    if(i%2 != 0){
        cout<<i<<" " ;
        sum=sum+i;
    }
}
cout<<"\nThe sum of odd numbers is : "<<sum;
    return 0;
}