#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int count1=0;
    int count2=0;

    string s;
    cin>>s;

    for(int i=0; i<n; i++){
        if(s[i] == 'A'){
            count1++;
        }else{
            count2++;
        }
    }

    if(count1>count2){
        cout<<"Anton"<<endl;
    }else if(count1<count2){
        cout<<"Danik"<<endl;
    }else if(count1==count2){
        cout<<"Friendship"<<endl;
    }

    return 0;
}