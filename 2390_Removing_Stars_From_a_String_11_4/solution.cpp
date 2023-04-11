#include <bits/stdc++.h>
using namespace std;

string removeStars(string s) {
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='*')
        {
            st.pop();
            continue;
        }
        st.push(s[i]);
    }
    s.erase();
    while(!st.empty())
    {
        s.push_back(st.top());
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
}

int main()
{
    string s="leet**cod*e";
    cout<<removeStars(s)<<endl;
    return 0;
}