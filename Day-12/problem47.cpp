#include<iostream>
using namespace std;
void fibo(int x){
   int a=0,b=1;
   if(x>=1){
      cout<<a<<" ";
   }
   if(x>=2){
      cout<<b<<" ";
   }
   for(int i=3;i<=x;i++){
      int c=a+b;
      cout<<c<<" ";
      a=b;
      b=c;
   }
}
int main(){
   int n;
   cout<<"Number of elements to be printed: ";
   cin>>n;
   fibo(n);
   return 0;
}