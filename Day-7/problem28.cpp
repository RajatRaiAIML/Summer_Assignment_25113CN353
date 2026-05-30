#include<iostream>
using namespace std;
int reverse(int num,int rev){
    if(num==0){
        return rev;
    }
    else{
    return reverse(num/10,rev*10+num%10);
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<reverse(n,0);
    return 0;
}