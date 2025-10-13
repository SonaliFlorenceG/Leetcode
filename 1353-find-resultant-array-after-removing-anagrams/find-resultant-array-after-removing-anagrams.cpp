class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        if(words.empty()) return {};
        
        vector<string> ans;
        ans.push_back(words[0]); 
        for(int i = 1; i < words.size(); i++){
            string prev = ans.back();
            string curr = words[i];
            
            string sorted_prev = prev;
            string sorted_curr = curr;
            
            sort(sorted_prev.begin(), sorted_prev.end());
            sort(sorted_curr.begin(), sorted_curr.end());
            
            if(sorted_prev != sorted_curr){
                ans.push_back(curr);
            }
        }
        
        return ans;
    }
};
