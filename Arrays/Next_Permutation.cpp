class Solution {
public:

    //SIMPLE CODE FROM C++ STL
    // void nextPermutation(vector<int>& nums) {
    //     next_permutation(nums.begin(),nums.end());
        
    // }


    class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int ind=nums.size()-1;
        

        //finding the peak point...
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i-1]>=nums[i]){
                continue;
            }
            else{
                ind=i-1;
                break;
            }
        }
        
        //valid optimization...
        if(ind==nums.size()-1) {
            reverse(nums.begin(),nums.end());
            return;
        }

        

        //now time to next permutate just above that number and break...
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }

        
        //sort the right half or reverse the right half...
        sort(nums.begin()+ind+1,nums.end());
        return;
        
    }
};
};