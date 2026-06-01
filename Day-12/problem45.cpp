#include<iostream>
using namespace std;
void palindrome(int a){
    int rev=0,r,n1=a;
    while(n1>0){
        r=n1%10;
        rev=rev*10+r;
        n1=n1/10;
    }
    if(rev==a)
    cout<<""<<a<<" is a palindrome";
    else
    cout<<""<<a<<" is not a palindrome";
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    palindrome(n);
    return 0;
}