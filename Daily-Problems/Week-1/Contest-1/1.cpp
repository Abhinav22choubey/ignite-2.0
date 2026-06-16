#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
    if(s[i]=='a')
       s[i]='z';
    else
       s[i]=(s[i]-1);
    }
    cout<<s<<endl;
}
int main(){
    int test;
    cin>>test;
    while(test--){
     solve();
    }
}