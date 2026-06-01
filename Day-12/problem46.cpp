#include<iostream>
#include<cmath>
using namespace std;
void armstrong(int a){
    int count,n1=a,sum=0;
    count=log10(a)+1;
    n1=a;
    while(n1>0){
        int r=n1%10;
        sum+=pow(r,count);
        n1=n1/10;
    }
    if(a==sum)
        cout<<""<<a<<" is an armstrong.";
    
    else
        cout<<""<<a<<" is not an armstrong.";
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    armstrong(n);
    return 0;
}