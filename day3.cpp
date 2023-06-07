//Question1--->Search in 2D matrix
/*
 int m=matrix.size();
        int n=matrix[0].size();
        int l=0,r=m-1;
        int i=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(matrix[mid][0]==target)
            return true;
            if(target<matrix[mid][0]){
            r=mid-1;
            } 
            else{
                i=mid;
                l=mid+1;
            }
        }
        if(i==-1)
        return false;
        l=0,r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(matrix[i][mid]==target)
            return true;
            if(target<matrix[i][mid])
            r=mid-1;
            else
            l=mid+1;
        }
        return false;
*/
//Question2--->pow(x,n)
/*
#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
     long long ans=1;
        long long cx=x;
    
        while(n>0){
          if (n % 2 != 0) {
           ans=((ans%m)*(cx%m))%m;
          }
                cx=((cx)%m*(cx)%m)%m;
            n=n/2;
        }

   return (int)(ans%m);
}
*/
//Question3---->Majority element(>n/2)
/*
#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int m=arr[0];
        int c=1;
        for(int i=1;i<n;i++){
            if(arr[i]==m)
            c++;
            else{
                c--;
                if(c==0){
                    c=1;
                m=arr[i];
                }
            }
        }
        c=0;
        for(int i=0;i<n;i++){
            if(arr[i]==m)
            c++;
        }
        if(c>(n/2))
        return m;
        return -1;
}
*/
//Question4--->Majority element (>n/3)
/*
#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &nums)
{
    // Write your code here.
      int n=nums.size();
        int c1=0,c2=0,e1=INT_MAX,e2=INT_MAX;
        for(int i=0;i<n;i++){
            if(c1==0 && nums[i]!=e2){
                c1++;
                e1=nums[i];
            }
            else if(c2==0 && nums[i]!=e1){
                c2++;
                e2=nums[i];
            }
            else if(nums[i]==e1)
            c1++;
            else if(nums[i]==e2)
            c2++;
            else{
                c1--;
                c2--;
            }
        }
        c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==e1)
            c1++;
            if(nums[i]==e2)
            c2++;
        }
        vector<int>ans;
        if(c1>n/3)
        ans.push_back(e1);
        if(c2>n/3)
        ans.push_back(e2);
        return ans;

}
*/
//Question5--->unique path
/*
#include <bits/stdc++.h> 
int find(int i,int j,vector<vector<int>>&t){
        if(i==0 && j==0)
            return 1;
        if(i<0 || j<0)
            return 0;
        if(t[i][j]!=-1)
            return t[i][j];
        int up=find(i-1,j,t);
        int left=find(i,j-1,t);
        return t[i][j]=up+left;
    }
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<int>prev(n,0);
        for(int i=0;i<m;i++){
            vector<int>curr(n,0);
            for(int j=0;j<n;j++){
                if(i==0 && j==0)
                    curr[0]=1;
                else{
                    int up=0;
                    int left=0;
                    if(i>0)
                        up=prev[j];
                    if(j>0)
                        left=curr[j-1];
                    curr[j]=up+left;
                }
            }
            prev=curr;
        }
        return prev[n-1];
}
*/
//Question6--->Reverse Pairs
/*
#include <bits/stdc++.h> 
void merge(vector<int>&arr,int low,int mid,int high){
        int i=low,j=mid+1;
        vector<int>temp;
        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i]);
                i++;
            }
            else{
                temp.push_back(arr[j]);
                j++;
            }
        }
        for(;i<=mid;i++)
        temp.push_back(arr[i]);
        for(;j<=high;j++)
        temp.push_back(arr[j]);
        
        for(int k=low;k<=high;k++){
            arr[k]=temp[k-low];
        }
    }
    int countPairs(vector<int>&arr,int low,int mid,int high){
        int c=0,j=mid+1;
        for(int i=low;i<=mid;i++){
            while(j<=high && arr[i]>2*1LL*arr[j])
            j++;
            c+=(j-(mid+1));
        }
        return c;
    }
    int mergeSort(vector<int>&arr,int low,int high){
        int c=0;
        if(low>=high) return c;
            int mid=(low+high)/2;
            c+=mergeSort(arr,low,mid);
            c+=mergeSort(arr,mid+1,high);
            c+=countPairs(arr,low,mid,high);
            merge(arr,low,mid,high);
        
        return c;
    }
int reversePairs(vector<int> &arr, int n){
	// Write your code here.
	 int c=mergeSort(arr,0,n-1);
        return c;	
}
*/