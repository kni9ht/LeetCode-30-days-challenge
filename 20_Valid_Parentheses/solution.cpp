#include "../stdc++.h"
using namespace std;

unordered_map<char,char> mp={{')','('},{']','['},{'}','{'}};

bool isValid(string s) {
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        if(st.size()>0)
        {
            if(st.top()==mp[s[i]])
            {
                st.pop();
                continue;
            }
        }
        st.push(s[i]);
    }
    if(st.size()>0)
    {
        return false;
    }
    else{
        return true;
    }
}

int main()
{
    string s="({[]})";
    cout<<isValid(s);
    return 0;
}