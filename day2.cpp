//Question1--->Rotate matrix
/*
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int n=matrix.size();
       for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
               swap(matrix[i][j],matrix[j][i]);
           }
       }
       for(int i=0;i<n;i++){
           for(int j=0;j<n/2;j++){
               swap(matrix[i][j],matrix[i][n-1-j]);
           }
       }

    }
};
*/
//Question2--->Merge Overlapping Interval
/*
int n=intervals.size();
         sort(intervals.begin(),intervals.end());
        int start=intervals[0][0];
        int end=intervals[0][1];
        vector<vector<int>>ans;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>end){
                ans.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
            }
            else if(intervals[i][0]<=end){
                if(intervals[i][1]>=end){
                    end=intervals[i][1];
                }
            }
        }
        ans.push_back({start,end});
        return ans;
*/
//Question3--->Merge two sorted array without extra space
/*
class Solution {
    void swapIfGreater(vector<int>&nums1, vector<int>&nums2, int i, int j){
        if(nums1[i]>nums2[j]){
            swap(nums1[i],nums2[j]);
        }
    }
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
       
            int len=n+m;
            int gap=len/2 + len%2;
            while(gap>0){
                int left=0;
                int right=left+gap;
                while(right<len){
                    //arr1 and arr2
                    if(left<n && right>=n){
                        swapIfGreater(nums1,nums2,left,right-n);
                        left++;
                        right++;
                        
                    }
                    //arr2 arr2
                    else if(left>=n){
                        swapIfGreater(nums2,nums2,left-n,right-n);
                        left++;
                        right++;
                    }
                    //arr1 arr1
                    else if(left<n && right<n){
                        swapIfGreater(nums1,nums1,left,right);
                        left++;
                        right++;
                    }
                }
                if(gap==1)
                break;
                gap=(gap/2)+(gap%2);
            }
            for(int i=0;i<m;i++){
                nums1[n+i]=nums2[i];

            }
    }
};
*/
//Question4-->

//Question5--->Reapeat and missing number
/*
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	long long int sq=0;
        long long int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i]*1LL;
            sq+=(1LL*arr[i]*arr[i]);
        }
        long long int os=n*1LL*(n+1)/2;
        long long int osq=n*1LL*(n+1)*(2*n+1)/6;
        long long int x=sum-os;
       long long  int y=sq-osq;
        y=y/x;
        long long int r=abs((x+y)/2);
        long long int m=abs((x-y)/2);
        return {m,r};
	
}
*/
//Question6--->Count inversions
/*
long long  merge(long long arr[],long long low,long long mid,long long high){
        vector<long long>temp;
         int k=0;
         long long int count=0;
         long long i=low,j=mid+1;
        while(i<=mid && j<=high){
            if(arr[i]>arr[j]){

                count+=(mid-i+1);
                temp.push_back(arr[j]);
                j++;
            }
            else{
                temp.push_back(arr[i]);
                i++;
            }
        }
        for(;i<=mid;i++)
        temp.push_back(arr[i]);
        for(;j<=high;j++)
        temp.push_back(arr[j]);
        
        for(long long ind=low;ind<=high;ind++){
            arr[ind]=temp[ind-low];
        }
        return count;
    }
    long long mergeSort(long long arr[],int low,int high){
        if(low>=high)
        return 0;
    
            long long int count=0;
            long long mid=(low+high)/2;
           count+= mergeSort(arr,low,mid);
            count+=mergeSort(arr,mid+1,high);
            count+=merge(arr,low,mid,high);
            return count;
        
    }
long long getInversions(long long *arr, int n){
    // Write your code here.
    return mergeSort(arr,0,n-1);
}
*/