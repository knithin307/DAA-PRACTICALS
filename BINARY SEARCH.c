#include <stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int n=5;
    int low=0;
    int high = n-1;
    int num = 50;
    while(low<=high){
    int mid =(low+high)/2;
    if (arr[mid]==num){
        printf("number is found",arr[mid]);
        return 0;
        
    }
    

        else if (arr[mid]<num){
            low = mid+1;
            
        }
        else {
            high =mid-1;
            
        }
    }
    printf("number is not found");
    }

