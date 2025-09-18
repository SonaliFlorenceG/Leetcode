class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>temp;
        for (int i=0; i<matrix.size(); i++){
            vector<int>t;
            for (int j=matrix.size()-1; j>=0; j--){
                t.push_back(matrix[j][i]);
            }
            temp.push_back(t);
            
        }
        for (int i=0; i<temp.size(); i++){
            for (int j=0; j<temp.size(); j++){
                matrix[i][j]=temp[i][j];
            }
        }
    }
};