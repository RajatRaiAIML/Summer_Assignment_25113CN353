#include<stdio.h>
int main(){
    int n,res=1,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        i=n%10;
        res=res*i;
        n=n/10;
    }
    printf("Product of digits:%d",res);
    return 0;
}