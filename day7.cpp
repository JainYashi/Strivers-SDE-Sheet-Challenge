// ques1---> rotate a linked list
/*
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head==NULL)
        return head;
         ListNode *temp=head,*q=NULL;
        int c=0;
        while(temp){
            c++;
temp=temp->next;
        }
        k=k%c;
        if(k==0)
        return head;
        int r=c-k;
        temp=head;
         c=0;
        while(temp->next){
            if(c==r-1){
                q=temp;
            }
            c++;
            temp=temp->next;
        }
        if(q==temp || q==NULL)
        return head;
        ListNode *h=q->next;
        q->next=NULL;
        temp->next=head;
        return h;
        
    }
};
*/
//ques2-->clone a linked list with random and next pointer
/*
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
        return NULL;
        //step1
        Node *temp=head;
        while(temp){
            Node *copy=new Node(temp->val);
            copy->next=temp->next;
            temp->next=copy;
            temp=temp->next->next;
        }
        //step2
        temp=head;
        while(temp){
            if(temp->random){
                temp->next->random=temp->random->next;
            }
            temp=temp->next->next;
        }
        //step3
        Node *dummy=new Node(-1);
        Node *t=dummy;
        temp=head;
        while(temp){
            t->next=temp->next;
            t=t->next;
            temp->next=temp->next->next;
            temp=temp->next;
        }
        return dummy->next;
    }
};
*/
//ques3-->3 sum
/*
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])
            continue;
            int j=i+1,k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])j++;
                    while(j<k && nums[k]==nums[k+1])k--;
                }
            }
        }
        return ans;
    }
};
*/
//ques4-->trapping rainwater
/*
class Solution {
public:
    int trap(vector<int>& height) {
        //two pointer
       int n=height.size(),l=0,r=n-1,leftMax=0,rightMax=0,res=0;
        while(l<=r){
            if(height[l]<=height[r]){
                if(height[l]>=leftMax)
                leftMax=height[l];
                else
                res+=(leftMax-height[l]);
                l++;
            }
            else{
                if(height[r]>=rightMax)
                rightMax=height[r];
                else
                res+=(rightMax-height[r]);
                r--;
            }
        }
        return res;
       
    }
};*/
//ques5-->Remove duplicates from sorted array
/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
       
    }
};
*/
//ques6-->maximum consequtive ones
/*
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0,maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c=0;
            }
            else{
                c++;
            }
            maxi=max(maxi,c);
        }

        return maxi;
    }
};
*/