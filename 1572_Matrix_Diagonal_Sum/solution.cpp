#include <bits/stdc++.h>
using namespace std;

int diagonalSum(vector<vector<int>> &mat){
  int sum=0,i=0,j=mat[0].size()-1;
  while(i<mat.size()){
    sum=sum+mat[i][i];
    if(i!=j)
    {
      sum=sum+mat[i][j];
    }
    j--;
    i++;
  } 
  return sum;
}

int main (int argc, char *argv[])
{
  vector<vector<int>> mat={{1,2,3},
                           {4,5,6},
                           {7,8,9}};
  cout<<diagonalSum(mat)<<endl;
  return 0;
}
