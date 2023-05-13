#include "../stdc++.h"
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> vc;
    for(int i=0;i<numRows;i++)
    {
        vector<int> tmp(i+1,1);
        for(int j=0;j<=i;j++)
        {
            if(j==0 || j==i)
            {
                continue;
            }
            else if(i>1)
            {
                tmp[j]=vc[i-1][j-1]+vc[i-1][j];
            }
        }
        vc.push_back(tmp);
    }
    return vc;
}

int main(int argc, char const *argv[])
{
    int numRows = 5;
    vector<vector<int>> tri;
    tri=generate(numRows);
    for(auto i:tri)
    {
        for(auto j:i)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
