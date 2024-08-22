class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int m,r,t;
        vector<int>a;
        for (int i=0; i<grid.size(); i++){
            for (int j=0; j<grid[i].size(); j++){
                a.push_back(grid[i][j]);
            }
        }
        sort(a.begin(),a.end());
        vector<int>b;
        for (int i=0; i<a.size(); i++){
            b.push_back(i+1);
        }
        for (int i=0; i<a.size(); i++){
            int c= count(a.begin(),a.end(),a[i]);
            if (c>1){
                r=a[i];
                break;
            }
        }
        for (int i=0; i<a.size(); i++){
            if (count(a.begin(),a.end(),b[i])==0){
                    m=b[i];
                    break;
            }
        }        
        vector<int>c;
        c.push_back(r);
        c.push_back(m);
        return c;
    }
};