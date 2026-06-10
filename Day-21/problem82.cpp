#include<iostream>
using namespace std;
void reverse(char ch[],int len){
    int st=0;
    int end=len-1;
    while(st<end){
       swap(ch[st],ch[end]);
       st++;
       end--;
    }
    cout<<ch;
}
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
    int len=findlength(ch);
    reverse(ch,len);
    return 0;
}