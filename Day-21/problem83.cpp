#include<iostream>
using namespace std;
char tolower(char ch){
    if(ch>='A' && ch<='Z'){
        return ch+32;
    }
    return ch;
}
int countvowels(char ch[]){
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        char c=tolower(ch[i]);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            count++;
        }
    }
    return count;
}
int main(){
    char ch[20];
    cout<<"Enter your name: ";
    cin>>ch;
    cout<<countvowels(ch);
    return 0;
}