#include <iostream>
#include <climits>

using namespace std;
int main(){
    int nums[] = {5,15,22,1,-15,-24};
    int n = sizeof(nums)/sizeof(int);
    
    int smallest = INT_MAX;
    int largest = INT_MIN;

    // USING FOR LOOP

    for(int i = 0; i < n; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
        if(nums[i] > largest){
            largest = nums[i];
        }
    }
    cout<<"The smallest number in the array is : "<<smallest<<endl;
    cout<<"The largest number in the array is : "<<largest<<endl;

    //---> We can also use predefined function 'min','max' to get smallest and largest number
    // for(int i = 0; i < n; i++){
    //     smallest = max(nums[i],smallest);
    // }
    // cout<<"The smallest number in the array is : "<<smallest<<endl;

    //USING WHILE LOOP

    // int i=0;
    // while( i < n){
    //     if(nums[i] < smallest){
    //         smallest = nums[i];
    //     }
    //     i++;
    // }
    // cout<<"The smallest number in the array is : "<<smallest<<endl;

    return 0;

}