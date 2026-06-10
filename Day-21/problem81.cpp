#include<iostream>
using namespace std;
int findlength(char ch[]){
    int len=0;
    for(int i=0;ch[i]!='\0';i++){
        len++;
    }
    return len;
}
int main(){
    char ch[20];
    cout<<"Enter your name: ";
    cin>>ch;
    cout<<findlength(ch);
    return 0;
}