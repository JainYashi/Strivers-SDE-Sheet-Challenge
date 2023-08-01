//ques1-->subset sum
/*
#include <bits/stdc++.h> 
void find(int i,int s,vector<int> &arr, int N,vector<int> &ans){
    if(i==N){
        ans.push_back(s);
        return;
    }
    s=s+arr[i];
    find(i+1,s,arr,N,ans);
    s=s-arr[i];
    find(i+1,s,arr,N,ans);
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int> ans;
        
        find(0,0,num,num.size(),ans);
        sort(ans.begin(),ans.end());
        return ans;

}
*/
//ques2-->subset2
/*
#include <bits/stdc++.h> 
void sum(int i,vector<int>&v,vector<int>&nums,vector<vector<int>>&ans){
        
            ans.push_back(v);
        
    
        for(int j=i;j<nums.size();j++){
            if(j>i && nums[j]==nums[j-1])
                continue;
            v.push_back(nums[j]);
            sum(j+1,v,nums,ans);
            v.pop_back();
        }
    }
vector<vector<int>> uniqueSubsets(int n, vector<int> &nums)
{
    // Write your code here.
    vector<int>v;
vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        sum(0,v,nums,ans); 
 return ans;
}
*/
//ques3-->combination 1
/*
#include<bits/stdc++.h>
void find(int i,vector<vector<int>>&ans,vector<int>&temp,int target,vector<int>& candidates){
        if(i==candidates.size()){
          if (target==0){
              ans.push_back(temp);
          }
            return;
        }
        //if(candidates[i]<=target){
            temp.push_back(candidates[i]);
            find(i+1,ans,temp,target-candidates[i],candidates);
            temp.pop_back();
       // }
        find(i+1,ans,temp,target,candidates);
    }
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int target)
{
    // Write your code here.
    vector<vector<int>>ans;
        vector<int>temp;
        find(0,ans,temp,target,arr);
        return ans;

}
*/
//ques4-->combination2
/*
#include<bits/stdc++.h>
void find(int i,vector<vector<int>>&ans,vector<int>&temp,vector<int>&candidates,int target){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        for(int j=i;j<candidates.size();j++){
            if(j>i && candidates[j]==candidates[j-1])
                continue;
            if(candidates[j]>target)
                break;
            temp.push_back(candidates[j]);
            find(j+1,ans,temp,candidates,target-candidates[j]);
            temp.pop_back();
        }
    }
vector<vector<int>> combinationSum2(vector<int> &candidates, int n, int target)
{
	// Write your code here.
	vector<vector<int>>ans;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        find(0,ans,temp,candidates,target);
        return ans;
}

*/
//ques5-->palindrome pationtioning
/*
class Solution {
    bool isPalindrome(string &s,int i,int j){
        while(i<=j){
            if(s[i++]!=s[j--])
            return false;
        }
        return true;
    }
public:
    void find(int p,string &s,vector<vector<string>>&ans,vector<string>&v){
        if(p==s.size()){
            ans.push_back(v);
            return;
        }
        for(int i=p;i<s.size();i++){
            if(isPalindrome(s,p,i)){
                v.push_back(s.substr(p,i-p+1));
                find(i+1,s,ans,v);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>v;
        find(0,s,ans,v);
        return ans;
    }
};
*/
//ques6--->kth permutation sequence
/*
string kthPermutation(int n, int k) {
    // Write your code here.
    string s="";
        int fact=1;
        vector<int>v;
        for(int i=1;i<n;i++){
            fact=fact*i;
            v.push_back(i);
        }
        v.push_back(n);
        k=k-1;
        while(true){
        s=s+to_string(v[k/fact]);
        v.erase(v.begin()+k/fact);
            if(v.size()==0)
                break;
        k=k%fact;
            fact=fact/v.size();
            }
        return s;
}

*/