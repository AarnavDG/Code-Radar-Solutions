#include<stdio.h>

void count(int n, int arr[]){
    int even = 0;
    int odd = 0;

    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even += 1;
        }
        else{
            odd += 1;
        }
    }
    printf("%d %d",even ,odd);
}

int main(){
    int a;
    scanf("%d\n",&a);
    int arr[a];
    for(int i=0; i<a; i++){
        scanf("%d",arr[i]);
    }
    count(a,arr);




}