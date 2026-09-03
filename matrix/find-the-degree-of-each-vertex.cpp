class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
         vector<int> degrees;
        
        for (int i = 0; i < matrix.size(); i++) {
            int c=0;
            for (int j = 0; j < matrix[i].size(); j++){
                if(matrix[i][j]==1)
                c++;
            }
            degrees.push_back(c);
        }
    return degrees;
    }
};