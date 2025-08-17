#include <iostream>
using namespace std;
int LinearSearch(int arr[],int size,int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){   // FOUND
            return i;
        }
    }
    return -1;  //NOT FOUND
}

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int size = sizeof(arr)/sizeof(int);
    int target = 1;
    int result = LinearSearch(arr,size,target);
    cout<<"The target index is : "<<result<<endl;
    return 0;
}