/*Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

Input: n = 3
Output: [[1,2,3],[8,9,4],[7,6,5]]


Input: n = 1
Output: [[1]]
*/
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generateMatrix(int &n)
{

    int left = 0, right = n - 1;
    int top = 0, bottom = n - 1;
    vector<vector<int>> matrix(n, vector<int>(n, 0)); // Initialize the nxn matrix with zeroes
    int cnt = 1;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            matrix[top][i] = cnt;
            cnt++;
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            matrix[i][right] = cnt;
            cnt++;
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                matrix[bottom][i] = cnt;
                cnt++;
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                matrix[i][left] = cnt;
                cnt++;
            }
            left++;
        }
    }
    return matrix;
}

int main()
{
    int n=3;
    vector<vector<int>> ans = generateMatrix(n);
    for (int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
        
}