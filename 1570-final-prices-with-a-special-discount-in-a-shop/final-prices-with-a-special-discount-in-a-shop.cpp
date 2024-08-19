class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>a;
        int c=0;
        for (int i=0; i<prices.size()-1; i++){
            for(int j=i+1; j<prices.size(); j++){
                if (prices[j]<=prices[i]){
                    a.push_back(prices[i]-prices[j]);
                    c++;
                    break;
                }
            }
            if (a.size()==i){
                a.push_back(prices[i]);
            }
        }
        a.push_back(prices[prices.size()-1]);
        return a;
    }
};