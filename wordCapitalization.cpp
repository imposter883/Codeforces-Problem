#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;

        if(!str.empty() && str>="a" && str<="z"){
            str[0] = str[0]-32;
            cout<<str;
        }else{
            cout<<str;
        }
    return 0;
}