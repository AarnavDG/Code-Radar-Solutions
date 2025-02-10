#include <stdio.h>

void checkSorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(arr[i]<=arr[j]){
                printf("Sorted");
            }
            else{
                printf("Not Sorted");
            }
        }
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }

    checkSorted(arr,n);
    
    return 0;
}