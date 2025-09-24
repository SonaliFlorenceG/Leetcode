class Solution {
public:
    int compareVersion(string version1, string version2) {
        int t1,t2;
        string s1="", s2="";
        int c=0; 

        int i = 0, j = 0;
        int n1 = version1.size(), n2 = version2.size();

        while (i < n1 || j < n2) {
            s1 = "";
            while (i < n1 && version1[i] != '.') {
                s1 += version1[i];
                i++;
            }
            if (i < n1 && version1[i] == '.') i++; 
            s2 = "";
            while (j < n2 && version2[j] != '.') {
                s2 += version2[j];
                j++;
            }
            if (j < n2 && version2[j] == '.') j++; 
            if (s1 == "") t1 = 0;
            else t1 = stoi(s1);

            if (s2 == "") t2 = 0;
            else t2 = stoi(s2);

            if (t1 < t2) return -1;
            if (t1 > t2) return 1;
        }

        return 0;
    }
};
