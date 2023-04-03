#include "../stdc++.h"
using namespace std;

int numRescueBoats(vector<int>& people, int limit) {
    sort(people.begin(), people.end());
    int i=0, j=people.size()-1, res=0;
    while(i<j)
    {
        if(people[j]+people[i]<=limit)
        {
            res++;
            j--;
            i++;
        }
        else if(people[j]+people[i]>limit)
        {
            res++;
            j--;
        }
        if(i==j)
        {
            res++;
        }
    }
    return res;
}

int main()
{
    vector<int> people={2,2};
    int limit=6;
    cout<<numRescueBoats(people, limit);
    return 0;
}