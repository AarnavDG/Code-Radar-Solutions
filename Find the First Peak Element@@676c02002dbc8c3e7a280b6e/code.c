#include <stdio.h>

void PeakElement(int arr[],int n){
    if(n==1){
        return arr[0];
    }
    if(arr[0]>arr[1]){
        return arr[0];
    }
    for(int i=0;i<n;i+=){
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            retuen arr[i];
        }
    }
    if(arr[n-1]>arr[n-2]){
        return arr[n-1];
    }
}


int main() {
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    PeakElement(arr,n);
}