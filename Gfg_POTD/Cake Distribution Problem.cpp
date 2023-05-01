/*
Cake Distribution Problem
https://practice.geeksforgeeks.org/problems/0a7c7f1089932257071f9fa076f25d353f91e0fd/1
Cake Distribution Problem.cpp gfg geeksforgeeks potd Problem of the day
02 May 2023
*/


class Solution{
public:
    int maxSweetness(vector<int>& sweetness, int N, int K) {
        int low = *min_element(sweetness.begin(), sweetness.end());
        int high = accumulate(sweetness.begin(), sweetness.end(), 0);
        int ans = 0;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            int count = 0, curr = 0;
            for(int i = 0; i < N; i++) {
                curr += sweetness[i];
                if(curr >= mid) {
                    count++;
                    curr = 0;
                }
            }
            if(count >= K + 1) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return ans;
    }
};
