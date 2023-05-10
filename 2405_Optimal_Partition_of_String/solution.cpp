#include<bits/stdc++.h>
using namespace std;

int partitionString(string s) {
    unordered_set<char> st;
    int ct=0;
    for(int i=0;i<s.size();i++){
        if(st.find(s[i])!=st.end())
        {
            st.clear();
            ct++;
        }
        st.insert(s[i]);
    }
    return ct+1;
}

int main()
{
    string s="abacaba";
    cout<<partitionString(s);
    return 0;
}