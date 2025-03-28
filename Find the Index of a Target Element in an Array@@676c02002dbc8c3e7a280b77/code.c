#include<stdio.h>

int search_index(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
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

    int result = search_index(arr, n, target);

    if(result != -1){
        printf("%d", result);
    }else{
        printf("-1");
    }
    return 0;
}