#include <iostream>
using namespace std;
int main(){
    int v[100];
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int k;
    cout<<"Enter the value of k : ";
    cin>>k;

    int count = 0;

    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            v[count] = i;
            count++;
        }
    }

    for(int i = 0;i<count;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    if(count>=k){
        cout<<v[k];
    }
    else{
        cout<<1;
    }
    return 0;
}