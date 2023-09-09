/* Done 2 questions on Recursion
Q1. Subjects (Leetcode - 78)
Q2. Subsequences of a string ( Code studio ) */

// Subjects Code
/*

class Solution {
    private:
    void solve(vector<int>nums,vector<int>output,int index,vector<vector<int>>&ans)
    {
        // Base case
        if(index >= nums.size())
        {
            ans.push_back(output);
            return ;
        }
        // Exclude Case
        solve(nums, output, index+1, ans);

        // Include Case
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index+1, ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
    }
};

*/


// Subsequencs of a string
/*
#include <bits/stdc++.h>
void solve(string str, string output, int index, vector<string> &ans)

{
    // Base Case
    if (index >= str.length())
    {
        if (output.length() > 0)
        {
            ans.push_back(output);
        }
        return;
    }
    // Exclude Case
    solve(str, output, index + 1, ans);

    // Include Case
    char element = str[index];
    output.push_back(element);
    solve(str, output, index + 1, ans);
}
vector<string> subsequences(string str)
{

    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
}
*/