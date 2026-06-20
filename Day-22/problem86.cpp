#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[1000];
    int ch=0,word=0;
    cout<<"Enter a sentence: ";
    cin.getline(str,1000);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            if(ch!=0){
                word++;
            }
            ch=0;
        }
        else{
            ch++; 
        }
    }
    if(ch!=0){
        word++;
    }
    cout<<"Total words: "<<word;
    return 0;
}