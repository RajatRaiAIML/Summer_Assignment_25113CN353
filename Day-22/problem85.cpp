#include<iostream>
using namespace std;
bool specialcharacter(char ch){
    if(((int)ch>=32 && (int)ch<=96) || ((int)ch>=123 && (int)ch<=126) ){
        return true;
    }
    return false;
}
char tolower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        int a=(int)ch+32;
        return (char)a;
    }
}
bool palindrome(char name[],int n){
    int st=0;
    int end=n-1;
    while(st<=end){
            if(specialcharacter(name[st])){
            st++;
            continue;
            }
            if(specialcharacter(name[end])){
            end--;
            continue;
            }
            if(tolower(name[st])!=tolower(name[end])){
            return 0;
            }
            st++;
            end--;
        }
        return 1;
}

int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20]; 
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Your name is: "<<name<<endl;
    int len=getlength(name);
    cout<<"Length: "<<len<<endl;
    cout<<"Palindrome or not: "<<palindrome(name,len);
    return 0;
}