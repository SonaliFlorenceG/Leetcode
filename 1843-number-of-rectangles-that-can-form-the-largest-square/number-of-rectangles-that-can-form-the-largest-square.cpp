class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int>a;
        for (int i=0; i<rectangles.size(); i++){
            sort(rectangles[i].begin(),rectangles[i].end());
            a.push_back(rectangles[i][0]);
        }
        sort(a.begin(),a.end());
        int t=a[a.size()-1];
        int c=0;
        for (int i=0; i<a.size(); i++){
            if (a[i]==t){
                c++;
            }
        }
        return c;
    }
};