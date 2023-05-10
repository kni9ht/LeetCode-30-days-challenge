#include "../stdc++.h"
using namespace std;

int BinarySearch(long long spell, vector<int>& potions, long long success, int st, int ed)
{
    int mid=(st+ed)/2;
    if(mid!=0)
    {
        if((long long)potions[mid]*spell>=success && (long long)potions[mid-1]*spell<success)
        {
            return mid;
        }
    }
    else if((long long)potions[mid]*spell>=success)
    {
        return mid;
    }
    if(potions.size()>1)
    {
        if((long long)potions[ed]*spell>=success && (long long)potions[ed-1]*spell<success)
        {
            return ed;
        }
    }
    else if((long long)potions[ed]*spell>=success)
    {
        return ed;
    }
    if(mid==st || mid==ed)
    {
        return -1;
    }
    return potions[mid-1]*spell<success?BinarySearch(spell, potions, success, mid, ed):BinarySearch(spell, potions, success, st, mid);
}

vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans(spells.size(),0);
        for(int i=0;i<spells.size();i++)
        {
            if((long long)spells[i]*(long long)potions[potions.size()-1]>=success)
            {
                ans[i]=potions.size()-BinarySearch((long long)spells[i], potions, success, 0, potions.size()-1);   
            }
        }
        return ans;
    }

int main()
{
    vector<int> spells={5,1,3};
    vector<int> potions={1,2,3,4,5};
    long long success=7;
    cout<<"[ ";
    for(auto i:successfulPairs(spells,potions,success))
    {
        cout<<i<<",";
    }
    cout<<" ]";
    return 0;
}