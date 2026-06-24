#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: "; 
    getline(cin,s);
    int index=0;
    int i=0;
    int n=s.length();
    while(i<n){
        char curr_char=s[i];
        int count=0;

        while(i<n && s[i]==curr_char){
            count++;
            i++;
        }

        s[index]=curr_char;
        index++;

        if(count>1){
            string count_str=to_string(count);
            for(char &ch: count_str){
                s[index]=ch;
                index++;
            }
        }
    }
    cout<<s;
    return 0;
}