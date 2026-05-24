#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        i=n%10;
        sum+=i;
        n=n/10;
    }
    printf("Sum=%d",sum);
    return 0;
}