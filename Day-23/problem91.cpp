#include<iostream>
#include<string.h>
using namespace std;
char toLower(char ch){
    if(ch>='A' && ch<='Z'){
        return ch+32;
    }
    return ch;
}

void frequency(string str,int freq[256]){
    for(int i=0;str[i]!='\0';i++){
        char ch=toLower(str[i]);
        if(ch==str[i]){
            freq[ch]++;
        }
    }
}

int main(){
    char str1[100];
    char str2[100];
    cout<<"Enter 1st string: ";
    cin.getline(str1,100);
    cout<<"Enter 2nd string: ";
    cin.getline(str2,100);
    int freq1[256]={0};
    int freq2[256]={0};

    frequency(str1, freq1);
    frequency(str2, freq2);


    bool isAnagram = true;
    for(int i=0; i<256; i++){
        if(freq1[i] != freq2[i]){
            isAnagram = false;
            break;
        }
    }

    if(isAnagram)
        cout << "Strings are anagrams!" << endl;
    else
        cout << "Strings are NOT anagrams!" << endl;
    return 0;
}