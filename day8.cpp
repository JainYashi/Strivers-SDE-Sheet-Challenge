//ques1-->maximum meeting
/*
#include <bits/stdc++.h> 
struct meeting{
        int start;
        int end;
        int pos;
    };
    static bool comp(struct meeting m1,struct meeting m2){
        if(m1.end<m2.end)
        return true;
        if(m1.end>m2.end)
        return false;
        if(m1.pos<m2.pos)
        return true;
        return false;
    }
vector<int> maximumMeetings(vector<int> &s, vector<int> &e) {
    // Write your code here.
    int n=s.size();
    struct meeting arr[n];
        for(int i=0;i<n;i++){
            arr[i].start=s[i];
            arr[i].end=e[i];
            arr[i].pos=i+1;
        }
        sort(arr,arr+n,comp);
        int last=arr[0].end;
        vector<int>ans;
        ans.push_back(arr[0].pos);
        for(int i=1;i<n;i++){
            if(arr[i].start>last){
                ans.push_back(arr[i].pos);
                last=arr[i].end;
            }
        }
       return ans;
}
*/
//ques2-->minimum number of platforms
/*
int calculateMinPatforms(int arr[], int dep[], int n) {
    // Write your code here.
    sort(arr,arr+n);
    	sort(dep,dep+n);
    	int platform=0;
    	int maxi=0;
    	int i=0,j=0;
    	while(i<n && j<n){
    	    if(arr[i]<=dep[j]){
    	        platform++;
    	       maxi=max(maxi,platform);
    	        i++;
    	    }
    	    else{
    	        platform--;
    	        j++;
    	    }
    	     
    	}
    	return maxi;
}
*/
//ques3-->job sequencing
/*
#include <bits/stdc++.h> 
static bool comp(vector<int> j1,vector<int> j2){
        
        
        if(j1[1]>j2[1])
        return true;
       
        return false;
    }
int jobScheduling(vector<vector<int>> &arr)
{
    // Write your code here
    int n=arr.size();
    sort(arr.begin(),arr.end(),comp);
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i][0]);
        }
        vector<int>vis(maxi+1,-1);
        int val=0;
        for(int i=0;i<n;i++){
            for(int j=arr[i][0];j>0;j--){
                if(vis[j]==-1){
                    vis[j]=1;
                    val+=arr[i][1];
                    break;
                }
            }
        }
        return val;
}

*/
//ques4-->fractional knapsack
/*
#include <bits/stdc++.h> 
static bool comp(pair<int,int> a,pair<int,int> b){
        if((((double)(a.second))/((double)(a.first)))>(((double)(b.second))/((double)(b.first))))
        return true;
        return false;
    }
double maximumValue (vector<pair<int, int>>& arr, int n, int W)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
      sort(arr.begin(),arr.end(),comp);
double val=0;
for(int i=0;i<n;i++){
    if(arr[i].first<=W){
        val+=arr[i].second;
        W=W-arr[i].first;
    }
    else{
        
        double new_val=(double)arr[i].second*(double)W/(double)arr[i].first;
        val+=new_val;
        break;
    }
   
}
     return val;
}
*/
//ques5-->find minimum number of coins
/*
#include <bits/stdc++.h> 
int findMinimumCoins(int N) 
{
    // Write your code here
    int arr[]={1,2,5,10,20,50,100,500,1000};
        int i;
        for(int j=8;j>=0;j--){
            if(arr[j]<=N){
                i=j;
                break;
            }
        }
        int c=0;
        while(N!=0){
            if(arr[i]<=N){
                N-=arr[i];
               c++;
            }
            else{
                i--;
            }
        }
        return c;
}

*/
//ques6-->maximum activities
/*
#include<bits/stdc++.h>
struct meeting{
        int start;
        int end;
    };
    static bool comp(struct meeting m1,struct meeting m2){
        if(m1.end<m2.end)
        return true;
        return false;
    }
int maximumActivities(vector<int> &s, vector<int> &e) {
    // Write your code here.
    int n=s.size();
    struct meeting arr[n];
        for(int i=0;i<n;i++){
            arr[i].start=s[i];
            arr[i].end=e[i];
        }
        sort(arr,arr+n,comp);
        int last=arr[0].end;
        int c=1;
        for(int i=1;i<n;i++){
            if(arr[i].start>=last){
                c++;
                last=arr[i].end;
            }
        }
       return c;

}
*/