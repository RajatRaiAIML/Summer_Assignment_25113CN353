#include<stdio.h>
#include<math.h>
int main(){
    int n,count,sum,i,n1,temp;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       count=0;
       sum=0;
       n1=i;
       while(n1>0){
        n1=n1/10;
        count++;
     }
      n1=i;
      while(n1>0){
        temp=n1%10;
        sum+=pow(temp,count);
        n1=n1/10;
     }
      n1=i;
      if(n1==sum){
        printf("%d ",i);
      }
  }
  return 0;
}