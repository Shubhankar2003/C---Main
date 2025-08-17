#include <iostream>
#include <climits>

using namespace std;
int main(){
    int nums[] = {5,15,22,1,-15,-24,25};
    int n = sizeof(nums)/sizeof(int);
    
    int smallest = INT_MAX;
    int largest = INT_MIN;

    // USING FOR LOOP
    int index;
    for( int i = 0; i < n; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
            index = i;
        }
    }
    cout<<"The smallest number in the array is : "<<smallest<<endl;
    cout<<"The index is : "<<index<<endl;
    return 0;
}