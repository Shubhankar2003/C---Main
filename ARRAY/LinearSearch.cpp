#include <iostream>
using namespace std;
int LinearSearch(int arr[],int size,int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int size = sizeof(arr)/sizeof(int);
    int result = LinearSearch(arr,size,8);
    cout<<"The target index is : "<<result<<endl;
    return 0;
}