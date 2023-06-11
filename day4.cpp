// Question1---> 2 sum
/*
#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   int cnt=0;
vector<vector<int>> ans;
unordered_map<int,int>mp;
for(int i=0;i<arr.size();i++){
if(mp[s-arr[i]]){
int val=mp[s-arr[i]];
vector<int> output;
while(val--){
output.push_back(min(arr[i],s-arr[i]));
output.push_back(max(arr[i],s-arr[i]));
ans.push_back(output);
}
}
mp[arr[i]]++;
}
sort(ans.begin(),ans.end());
return ans;
}
*/
//Question2-->4 sum
/*
#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(), arr.end());
    if(arr.size() < 4) return "No";
    bool flag = false;;
    for(int i = 0; i < arr.size(); i++){
        for(int j = i+1; j < arr.size(); j++){
            long long target_2 = target - arr[i];
            target_2 -= arr[j];
            int k = j+1;
            int l = arr.size()-1;
    while(k < l){
                int two_sum = arr[k] + arr[l];
                if(two_sum > target_2){
                    l--;
                }else if(two_sum < target_2){
                    k++;
                }else{
                    flag = true;
                    break;
                }
            }
        }
            }
 return flag ? "Yes" : "No";
}

*/
//Question3-->Longest Consecutive sequence
/*
#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    s.insert(arr[i]);
    int maxi=0;
    for(auto it:s){
        if(s.find(it-1)==s.end()){
            int c=1;
            int x=it;
            while(s.find(x+1)!=s.end()){
                c++;
                x=x+1;
            }
            maxi=max(maxi,c);
        }
    }
    return maxi;
}
*/
//Question4--->Largest subarray with k sum
/*
#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  unordered_map<int,int>m;
  int s=0,maxi=0;
  for(int i=0;i<arr.size();i++){
    s+=arr[i];
    if(s==0)
    maxi=max(maxi,i+1);
    else if(m.find(s)!=m.end()){
      maxi=max(maxi,i-m[s]);
    }
    if(m.find(s)==m.end())
    m[s]=i;
  }
return maxi;
}
*/
//Question5-->Count number of subarray with given xor k
/*
#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
   unordered_map<int,int>m;
    int count=0;
    int s=0;
    m[s]++;
    for(int i=0;i<arr.size();i++){
        s=s^arr[i];
        int temp=s^x;
       if(m.find(temp)!=m.end())
        count+=m[temp];
         m[s]++;
        
    }
    return count;
}
*/
//Question6-->Longest substring without repeating character
/*
#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    int n=input.size();
    int i=0,j=0,maxi=0;
    vector<int>m(26,-1);
    while(j<n){
     if(m[input[j]-97]!=-1){
         if(i<=m[input[j]-97])
         i=m[input[j]-97]+1;
     }
     maxi=max(maxi,j-i+1);
     m[input[j]-97]=j;
     j++;
    }
    return maxi;
}
*/