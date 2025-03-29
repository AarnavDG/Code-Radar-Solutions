#include<stdio.h>

void search_index(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            printf("%d", i);
        }
    }
    else{
        return -1;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);

    search_index(arr, n, taregt);
}