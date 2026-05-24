#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       sum+=i;
    }
    printf("SUM=%d",sum);
    return 0;
}