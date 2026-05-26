#include<stdio.h>
int main(){
    int n,i,j,count,k;
    printf("Enter the lower limit of the range: ");
    scanf("%d",&i);
    printf("Enter the upper limit of the range: ");
    scanf("%d",&j);
    for(n=i;n<=j;n++){
       count=0;
       if(n==1)
       continue;
       for(k=2;k<=n/2;k++){
        if(n%k==0){
            count++;
            break;
        }
    }
    if(count==0)
     printf("%d ",n);
    }
    return 0;
}