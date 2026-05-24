#include<stdio.h>
int main(){
    int n,i,pro=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        i=n%10;
        pro*=i;
        n=n/10;
    }
    printf("Product=%d",pro);
    return 0;
}