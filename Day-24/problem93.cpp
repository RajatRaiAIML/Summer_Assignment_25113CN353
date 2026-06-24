#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isRotation(string str1,string str2){
    int m=str1.length();
    int n=str2.length();
    if(m!=n){
        return false;
    }
    for(int i=1;i<=m;i++){
        rotate(begin(str1),begin(str1)+1,end(str1));

        if(str1==str2){
            return true;
        }
    }
    return false;
}
int main(){
    string str1;
    getline(cin,str1);
    string str2;
    getline(cin,str2);
    int m=str1.length();
    int n=str2.length();

    if(isRotation(str1,str2)){
        cout<<"Is a rotation";
    }
    else{
        cout<<"Not a rotation";
    }
    return 0;
}