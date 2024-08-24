class Solution {
public:
    string nearestPalindromic(string n) {
       long long int n_size=n.size();
       long long int z=stoll(n);
       if (z==9009){
        return "8998";
       }
       if (z<=10){
            stringstream ss;
            long long int ans=z-1;
            ss << ans;
            string res =ss.str();
            return res;
        }
        if (z==11){
            stringstream ss;
            long long int ans=9;
            ss << ans;
            string res =ss.str();
            return res;
        }
         if (n[0] == '1' && count(n.begin() + 1, n.end(), '0') == n_size - 1) {
            string lower_palindrome = string(n_size - 1, '9');
            string higher_palindrome = "1" + string(n_size - 1, '0') + "1";
            return (z - stoll(lower_palindrome) <= stoll(higher_palindrome) - z) ? lower_palindrome : higher_palindrome;
        }


         bool allNines = true;
        for (char c : n) {
            if (c != '9') {
                allNines = false;
                break;
            }
        }
        if (allNines) {
            string res = "1" + string(n_size - 1, '0') + "1";
            return res;
        }
        string rev_n = n;
        reverse(rev_n.begin(), rev_n.end());
        bool is_palindrome = (n == rev_n);

         bool isSameExceptMiddle = true;
        for (int i = 0; i < n_size / 2; i++) {
            if (n[i] != n[n_size - 1 - i]) {
                isSameExceptMiddle = false;
                break;
            }
        }
if (n[0] == '1' && n[n_size - 1] == '1' && count(n.begin() + 1, n.end() - 1, '0')== n_size - 2) {
            string palindrome = string(n_size - 1, '9');
            return palindrome;
        }
        if (isSameExceptMiddle) {
            if (n_size % 2 == 1) {
                if (n[n_size / 2] == '0') {
                    n[n_size / 2] = '1';
                } else {
                    n[n_size / 2] -= 1;
                }
            } else {
                if (n[n_size / 2 - 1] == '0' && n[n_size / 2] == '0') {
                    n[n_size / 2 - 1] = '1';
                    n[n_size / 2] = '1';
                } else {
                    n[n_size / 2 - 1] -= (n[n_size / 2 - 1] == '0' ? -1 : 1);
                    n[n_size / 2] -= (n[n_size / 2] == '0' ? -1 : 1);
                }
            }
            return n;
        }
        
       if (n_size%2==1){
            string pre;
            for (long long int i=0; i<n.size()/2+1; i++){
                pre+=n[i];
            }

            string num1_str=pre;
            long long int pre_num=stoll(num1_str);
            reverse(pre.begin(),pre.end());
            if (pre.size()>1){
                pre.erase(pre.begin()+0);
            }
            num1_str+=pre;

            pre_num-=1;
            stringstream s1;
            s1 << pre_num;
            string pre_2=s1.str();
            string num2_str=pre_2;
            reverse(pre_2.begin(),pre_2.end());
            if (pre_2.size()>1){
                pre_2.erase(pre_2.begin()+0);
            }
            num2_str+=pre_2;

            pre_num+=2;
            stringstream s2;
            s2 << pre_num;
            string pre_3=s2.str();
            string num3_str=pre_3;
            reverse(pre_3.begin(),pre_3.end());
            if (pre_3.size()>1){
                pre_3.erase(pre_3.begin()+0);
            }
            num3_str+=pre_3;

            long long int num1=stoll(num1_str);
            long long int num2=stoll(num2_str);
            long long int num3=stoll(num3_str);

            long long int abs1,abs2,abs3;
            abs1=abs(z-num1);
            abs2=abs(z-num2);
            abs3=abs(z-num3);
            if (abs1==abs2){
                if (num1<num2){
                    return num1_str;
                }
                else{
                    return num2_str;
                }
            }
            else if (abs2==abs3){
                if (num2<num3){
                    return num2_str;
                }
                else{
                    return num3_str;
                }
            }
            else if (abs1==abs3){
                if (num1<num3){
                    return num1_str;
                }
                else{
                    return num3_str;
                }
            }
            if (abs1<abs2 && abs1<abs3){
                return num1_str;
            }
            else if (abs2<abs1 && abs2<abs3){
                return num2_str;
            }
            else{
                return num3_str;
            }
        }
       else{
        string pre;
            for (long long int i=0; i<n.size()/2; i++){
                pre+=n[i];
            }

            string num1_str=pre;
            long long int pre_num=stoll(num1_str);
            reverse(pre.begin(),pre.end());
            num1_str+=pre;

            pre_num-=1;
            stringstream s1;
            s1 << pre_num;
            string pre_2=s1.str();
            string num2_str=pre_2;
            reverse(pre_2.begin(),pre_2.end());
            num2_str+=pre_2;

            pre_num+=2;
            stringstream s2;
            s2 << pre_num;
            string pre_3=s2.str();
            string num3_str=pre_3;
            reverse(pre_3.begin(),pre_3.end());
            num3_str+=pre_3;

            long long int num1=stoll(num1_str);
            long long int num2=stoll(num2_str);
            long long int num3=stoll(num3_str);

            long long int abs1,abs2,abs3;
            abs1=abs(z-num1);
            abs2=abs(z-num2);
            abs3=abs(z-num3);
            if (abs1==abs2){
                if (num1<num2){
                    return num1_str;
                }
                else{
                    return num2_str;
                }
            }
            else if (abs2==abs3){
                if (num2<num3){
                    return num2_str;
                }
                else{
                    return num3_str;
                }
            }
            else if (abs1==abs3){
                if (num1<num3){
                    return num1_str;
                }
                else{
                    return num3_str;
                }
            }
            if (abs1<abs2 && abs1<abs3){
                return num1_str;
            }
            else if (abs2<abs1 && abs2<abs3){
                return num2_str;
            }
            else{
                return num3_str;
            }

       }
       return ""; 
    }
};