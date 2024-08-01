#include<iostream>
using namespace std;
int main(){

    string s;
    cin>>s;
    string t;
    cin>>t;

    int flag =0;
    if(s.length() == t.length()){

         int n = s.length();
    
         for(int i=0; i<n; i++){
             if(s[i] == t[n-i-1]){
                 flag =1;
             }else{
                 flag = 0;
                 break;
             }
          }
    }

    if(flag == 1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}