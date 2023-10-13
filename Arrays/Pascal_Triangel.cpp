class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>>ans;
        int length=numRows;

        for(int row=0;row<length;row++){

            vector<int>res(row+1,1);
            for(int j=1;j<row;j++){
                res[j]=ans[row-1][j-1]+ans[row-1][j]; //pre row and pre col + pre row and next col...
            }
            ans.push_back(res);
        }

        return ans;
        
    }
};