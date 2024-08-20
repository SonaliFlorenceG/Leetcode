class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>a;
        for (int i=0; i<operations.size(); i++){
            if (operations[i]=="C" || operations[i]=="D" || operations[i]=="+"){
                if (operations[i]=="C"){
                    a.erase(a.begin()+(a.size()-1));
                }
                else if (operations[i]=="D"){
                    a.push_back(a[a.size()-1]*2);
                }
                else{
                    a.push_back(a[a.size()-1]+a[a.size()-2]);
                }
            }
            else{
                int t=stoi(operations[i]);
                a.push_back(t);
            }
        }
        int s=0;
        for (int i=0; i<a.size(); i++){
            s+=a[i];
        }
        return s;
    }
};