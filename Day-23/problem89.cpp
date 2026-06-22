#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str,100);
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        int count=0;
        for(int j=0;str[j]!='\0';j++){
            if(ch==str[j]){
                count++;
            }
        }
        if(count==1){
            cout<<ch<<endl;
            break;
        }
    }
    return 0;
}