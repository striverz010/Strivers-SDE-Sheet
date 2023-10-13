class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxi_Subarray=INT_MIN;
        int Cur_Sum=0;

        for(auto it:nums){
            Cur_Sum+=it;
            maxi_Subarray=max(maxi_Subarray,Cur_Sum);
            if(Cur_Sum<0) Cur_Sum=0; //if sum less than zero start again..!
        }

        return maxi_Subarray;



        
    }
};