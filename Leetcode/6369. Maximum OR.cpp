//6369. Maximum OR

class Solution {
public:
    long long maximumOr(vector<int>& nums, int k) {
        int n=nums.size();
        long long pre[n + 1], suf[n + 1];
            long long sol, pow = 1;
             for (int i = 0; i < k; i++){
                pow*=2;
             }

            pre[0] = 0;
            for (int i = 0; i < n; i++){
                pre[i + 1] = pre[i] | nums[i];
            }
             suf[n] = 0;
            for (int i = n - 1; i >= 0; i--){
                suf[i] = suf[i + 1] | nums[i];
            }
             sol= 0;
            for (int i = 0; i < n; i++)
                sol = max(sol, pre[i] | (nums[i] * pow) | suf[i + 1]);

            return sol;
    }
};
