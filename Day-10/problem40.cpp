#include<iostream>
using namespace std;
int main(){
    int n,ascii;
    cout<<"Enter number of rows and columns: ";
    cin>>n;
    char ch;
    for(int i=0;i<n;i++){
        ch='A';
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<ch;
            ch++;
        }
        for(ascii=64+i;ascii>=65;ascii--){
            cout<<char(ascii);
        }
    
        cout<<endl;
    }
    return 0;
}