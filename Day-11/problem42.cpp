#include<iostream>
using namespace std;
int maximum(int x,int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Maximum: "<<maximum(a,b);
    return 0;
}