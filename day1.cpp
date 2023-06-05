// Question1---->  Set matrix zero
/*class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0=1;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            if(matrix[i][0]==0)
                col0=0;
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
            }
            if(col0==0)
                matrix[i][0]=0;
        }
    }
};*/

//Question2--->Pascals triangle
/*class Solution {
public:
vector<int>generateRow(int row){
    vector<int>ans;
    ans.push_back(1);
    long long res=1;
    for(int i=1;i<row;i++){
        res=res*(row-i);
        res=res/i;
        ans.push_back(res);
    }
    return ans;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generateRow(i));
        }
        return ans;
        
    }
};*/

//Question3--->Next permutation
/*class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
         int index=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1){
            reverse(nums.begin(),nums.end());
            return ;
        }
        for(int i=n-1;i>index;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                reverse(nums.begin()+index+1,nums.end());
                return ;
            }
        }
    }
};*/
//Question4--->Kadane
/*
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            ans=max(ans,sum);
            if(sum<0)
            sum=0;
        }
        return ans;
    }
};
*/
//Question5--->Sort 0,1 ,2sarray
/*class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
        }
        
        
    }
};
*/
//Question5--->Stock,buy and sell
/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxProfit=0;
        for(int i=1;i<prices.size();i++){
            int profit=prices[i]-mini;
            maxProfit=max(maxProfit,profit);
            if(prices[i]<mini)
                mini=prices[i];
        }
        return maxProfit;
    }
};
*/