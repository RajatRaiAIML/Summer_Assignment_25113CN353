#include<stdio.h>
int main(){
    int i,n,a=0,b=1,c;
    printf("Enter Number of elements: ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=3;i<=n;i++){
       c=a+b;
       printf("%d ",c);
       a=b;
       b=c;
    }
    return 0;
}
