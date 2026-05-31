#include<iostream>
using namespace std;
int factorial(int a){
    int res=1,i=1;
    while(i<=a){
     res*=i;
     i++;
    }
    return res;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<factorial(n);
    return 0;
}