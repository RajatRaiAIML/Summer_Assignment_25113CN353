#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int count;
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str,100);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='#'){
            continue;
        }
        char ch=str[i];
        count=1;
        for(int j=i+1;str[j]!='\0';j++){
            if(ch==str[j]){
                count++;
                str[j]='#';
            }
        }
        cout<<str[i]<<"="<<count<<endl;
    }
    return 0;
}