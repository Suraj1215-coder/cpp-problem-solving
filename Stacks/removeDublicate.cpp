#include<bits/stdc++.h>
using namespace std;
string removeDublicate(string s){
        stack<char> st;
        st.push(s[0]);
        for(int i=0; i<s.length(); i++){
            if(s[i]!=st.top()) 
            st.push(s[i]);
        }
        s="";
        while(st.size()>0){
            s +=st.top();
            st.pop();
        }
        reverse(s.begin(), s.end());
        return s;
    }
int main(){
    int n;
    string s[n];
    cout<<s<<endl;
    s = removeDublicate(s);
    cout<<s<<endl;
}