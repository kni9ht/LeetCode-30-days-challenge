#include "../stdc++.h"
using namespace std;

enum {
    blue=1,
    red=-1,
};

bool isBipartite(vector<vector<int>>& graph) {
    vector<int> color(graph.size(),0);
    color[0]=blue;
    for(int i=0;i<graph.size();i++)
    {
        for(int n=0;n<graph[i].size();n++)
        {
            if(color[graph[i][n]]==0)
            {
                color[graph[i][n]]=color[i]==blue?red:blue;
            }
            if(color[graph[i][n]]==color[i])
            {
                return false;
            }
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> graph={{1,2,3},{0,2},{0,1,3},{0,2}};
    cout<<(isBipartite(graph)?"True":"False")<<endl;
    return 0;
}
