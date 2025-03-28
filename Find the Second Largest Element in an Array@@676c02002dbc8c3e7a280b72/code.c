#include<stdio.h>

void second_largest(int arr[],int n){
    if(n<2){
        printf("-1");
    }
    int first, second;
    if(arr[0]>arr[1]){
        first = arr[0];
        second = arr[1];
    }
    else if(arr[0]<arr[1]){
        first = arr[1];
        second = arr[0];
    }
    else if(arr[0] == arr[1]){
        first = second = arr[0];
    }

    for(int i=2; i<n; i++){
        if(arr[i]>first){
            second = first
            first = arr[i];
        }
        else if(arr[i]>second && arr[i]<first){
            second = arr[i];
        }
    }
    if(first == second){
        printf("-1");
    }
    else{
        printf("%d",second)
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    second_largest(arr,n);
    return 0;
}