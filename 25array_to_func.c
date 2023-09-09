// program to print the elements of array using pointer.
#include<stdio.h>

void printarry(int *ptr , int n){
    for(int i=0;i<n;i++){
        printf("tne value of element %d is %d\n",i+1,*(ptr + i));

    }
    ptr[2] = 5555;//this value will in main as well
}

    int main(){
        int arr[] = {2,3,4,5,6,7,8};
        printarry(arr,7);
        printf("%d",arr[2]);
    
    return 0;
}