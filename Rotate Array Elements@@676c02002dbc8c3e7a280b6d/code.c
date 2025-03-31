#include<stdio.h>
void reverse(int arr[],int a,int b){
    while(a<b){
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
        a++;
        b--;
    }
}
void rotate(int arr[],int n,int k){
    if(n==0) return;
    k %= n;
    reverse(arr,0,n-1);
    reverse(arr,o,k-1);
    reverse(arr,k,n-1);
}
int main()
{
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    rotate(arr,n,k);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}