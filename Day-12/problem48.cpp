#include<iostream>
using namespace std;
bool perfectnumber(int x){
    int sum=0,i=1;
    while(i<x){
      if(x%i==0){
        sum+=i;
      }
      i++;
    }
    return sum==x;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(perfectnumber(n))
    cout<<""<<n<<" is a perfect number.";
    else
    cout<<""<<n<<" is not a perfect number.";
    return 0;
}