#include "../stdc++.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int n=1;
    // cin>>n;
    int ct=0,h=n-1,v=0,nm=1;
    vector<vector<int>> mat(n,vector<int>(n,0));
    while(true)
    {
        for(int i=ct;i<=h;i++)
        {
            mat[v][i]=nm;
            nm++;
        }
        v++;
        for(int i=v;i<=h;i++)
        {
            mat[i][h]=nm;
            nm++;
        }
        h--;
        for(int i=h;i>=ct;i--)
        {
            mat[(mat.size()-1)-ct][i]=nm;
            nm++;
        }
        for(int i=h;i>=v;i--)
        {
            mat[i][ct]=nm;
            nm++;
        }
        if(nm>n*n)
        {
            break;
        }
        ct++;
    }
    for(auto i:mat)
    {
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
