#include<stdio.h>

void frequency(int arr[], int size){
    int visited[size];
    for(int i=0; i<size; i++){
        visited[i] = 0;
    }

    for(int i=0; i<size; i++){
        visited[i] == 1;
        continue;
    
        int count = 1;
        for(int j=i+1; j<size; j++){
            if(arr[i] == arr[j]){
                count++;
                visited[j] == 1;
            }
        }
        printf("%d %d",arr[i],count)
    }
}

int main(){
    int a;
    scanf("%d", &a);
    int arr[a];
    for(int i=0; i<a; i++){
        scanf("%d", &arr[i]);
    }

    frequency(arr,a);
    return 0;
}