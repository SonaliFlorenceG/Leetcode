class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>a;
        sort(arr.begin(),arr.end());
        int i=0;
        while(i<arr.size()){
            int c=0;
            for (int j=0; j<arr.size(); j++){
                if (arr[i]==arr[j]){
                    c++;
                }
            }
            int cnt = count(a.begin(), a.end(), c);
            if (cnt>0){
                return false;
            }
            else{
                a.push_back(c);
                i+=c;
            }
        }
        return true;
    }
};