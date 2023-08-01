//ques1-->print allpermutations
/*
#include <bits/stdc++.h> 
static void find(int i,string &nums,vector<string>&ans){
    if(i==nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int j=i;j<nums.size();j++){
        swap(nums[i],nums[j]);
        find(i+1,nums,ans);
        swap(nums[i],nums[j]);
    }
}
vector<string> findPermutations(string &nums) {
    // Write your code here.
    vector<string>ans;
find(0,nums,ans);
        return ans;
}
*/
//ques2-->n-queen problem
/*
#include<bits/stdc++.h>
void solve(int col,vector<vector<int>>&board,vector<int>&left,vector<int>&lower,vector<int>&upper
    ,vector<vector<int>>&ans,int n){
if(col==n){
    ans.push_back(board);
    return;
}
for(int i=0;i<n;i++){
    if(left[i]==0 && lower[i+col]==0 && upper[n-1+col-i]==0){
        board[i][col]=1;
        left[i]=1;
        lower[i+col]=1;
        upper[n-1+col-i]=1;
        solve(col+1,board,left,lower,upper,ans,n);
        board[i][col]=0;
        left[i]=0;
        lower[i+col]=0;
        upper[n-1+col-i]=0;
    }
}
    }
vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<vector<int>>board(n,vector<int>(n,-1));
      //  vector<string>board(n,s);
        vector<vector<int>>ans;
        vector<int>left(n,0);
        vector<int>lower(2*n-1,0);
        vector<int>upper(2*n-1,0);
        solve(0,board,left,lower,upper,ans,n);
        return ans;
}
*/
//ques3-->suduko solver
/*
class Solution {
    bool isValid(int r,int c,char n,vector<vector<char>>& grid){
        for(int i=0;i<9;i++){
            if(grid[r][i]==n)
            return false;
            if(grid[i][c]==n)
            return false;
            if(grid[3*(r/3)+(i/3)][3*(c/3)+(i%3)]==n)
            return false;
        }
        return true;
    }
    
    //Function to find a solved Sudoku. 
    bool solve(vector<vector<char>>& grid)  
    { 
        // Your code here
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(grid[i][j]=='.'){
                    for(char n='1';n<='9';n++){
                        if(isValid(i,j,n,grid)){
            grid[i][j]=n;
                           if( solve(grid))
                           return true;
                           grid[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
        
    }
    
public:
    
    void solveSudoku(vector<vector<char>>& grid) {
        solve(grid);
    }
};
*/
//ques4-->m-coloring problem
/*
#include <bits/stdc++.h> 
bool possible(int node,vector<vector<int>> &graph,int n,int col,vector<int>&color){
        for(int i=0;i<n;i++){
            if(graph[node][i]==1 && i!=node && color[i]==col )
            return false;
        }
        return true;
    }
    bool check(int node,vector<vector<int>> &graph, int m, int n,vector<int>&color){
        if(node==n)
        return true;
        for(int i=1;i<=m;i++){
            if(possible(node,graph,n,i,color)){
                color[node]=i;
              if(  check(node+1,graph,m,n,color))
              return true;
              color[node]=0;
                
            }
        }
        return false;
    }
string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
    int n=mat.size();
    vector<int>color(n,0);
        if(check(0,mat,m,n,color))
        return "YES";
        return "NO";
}
*/
//ques5->rat in a maze
/*
// User function template for C++

class Solution{
    void find(int sr,int sc,string &dir,string temp,int dr[],int dc[],vector<string>&ans,int n,vector<vector<int>>&vis,vector<vector<int>>&m){
        if(sr==n-1 && sc==n-1){
            ans.push_back(temp);
            return;
        }
            for(int i=0;i<4;i++){
                int nr=sr+dr[i];
                int nc=sc+dc[i];
if(nr>=0 && nr<n && nc>=0 && nc<n && m[nr][nc] && vis[nr][nc]==0){
    temp.push_back(dir[i]);
    vis[sr][sc]=1;
    find(nr,nc,dir,temp,dr,dc,ans,n,vis,m);
    vis[sr][sc]=0;
    temp.pop_back();
}
        }
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        if(m[0][0]==0 || m[n-1][n-1]==0)
        return ans;
        vector<vector<int>>vis(n,vector<int>(n,0));
        string dir="DLRU";
        int dr[]={1,0,0,-1};
        int dc[]={0,-1,1,0};
        string temp="";
        find(0,0,dir,temp,dr,dc,ans,n,vis,m);
        return ans;
    }
};


    
*/