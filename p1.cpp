#include<iostream>
#include<vector>
using namespace std;
int main()
{
class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int m = arr.size();
        int n =arr[0].size();
        vector<bool>row(m,false);
        vector<bool>col(n,false);
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i][j]==0)
                {
                    row[i] =true;// true means 0 set karna hai
                    col[j] =true;
                }
            }
        }
        
        // set rows zero
        for(int i=0;i<m;i++)
        {
            if(row[i]==true)
            {
                for(int j=0;j<n;j++)
                {
                    arr[i][j] =0;
                }
            }
        }
        
         // set cols zero
        for(int j=0;j<n;j++)
        {
            if(col[j]==true)
            {
                for(int i=0;i<m;i++)
                {
                    arr[i][j] =0;
                }
            }
        }
        
        
    }
};
}
/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.
Example 1:
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
*/