#include <stdio.h>

int main(){
    int nums[8]={1,2,7,9,3,4,6,4};
    printf("Enter the target element : ");
    int target;
    scanf("%d",&target);

    for(int i = 0; i < 8; i++){
        for(int j = i+1; j < 8; j++){
            if((nums[i] + nums[j] )== target){
                printf("Indices : [%d %d] ",i,j);
                return 0;
            }
        }
    }
    printf("No indices!");
    return 0;
}

//# 3Sum problem

/*#include <stdio.h>

int main(){
    int nums[8]={1,2,7,9,3,4,6,4};
    printf("Enter the target element : ");
    int target;
    scanf("%d",&target);

    for(int i = 0; i < 8; i++){
        for(int j = i+1; j < 8; j++){
            for(int k = j+1; k < 8; k++){
                if((nums[i] + nums[j] + nums[k])== target){
                    printf("Indices : [%d %d %d] ",i,j,k);
                    return 0;
                }
            }
        }      
    }
    printf("No indices!");
    return 0;
}*/