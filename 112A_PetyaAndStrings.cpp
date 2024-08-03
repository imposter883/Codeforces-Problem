#include<iostream>
using namespace std;

int main(){
    string str1,str2;
    cin>>str1;
    cin>>str2;

    int n = str1.length();

    for(int i=0; i<n; i++){
        str1[i] = toupper(str1[i]);
        str2[i] = toupper(str2[i]);

        if(str1[i] == str2[i]){
            continue;
        }

    }

    if(str1>str2){
        cout<<"1"<<endl;
    }else if(str1<str2){
        cout<<"-1"<<endl;
    }else if(str1 == str2){
        cout<<"0"<<endl;
    }

    return 0;
}