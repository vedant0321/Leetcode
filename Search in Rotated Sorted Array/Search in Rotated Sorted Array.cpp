class Solution {
public:
    int search(vector<int>& nums, int target) {
      //declare k for count
        int k=-1; // bcz when we not have target variable then we have to put -1 so intillay declare as -1;
        for(int i=0;i<nums.size();i++){
            if(target==nums[i])//check wheter present or not
            {
                k=i;//present then overwrite in the k
                
                break;
            }
        }
        return k;//retur k
    }
};