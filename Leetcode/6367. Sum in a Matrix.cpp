class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int score = 0;

        while (!nums.empty()) {
            int maxNum = INT_MIN;

            for (int i = 0; i < nums.size(); i++) {
                if (!nums[i].empty()) {
                    int rowMax = *max_element(nums[i].begin(), nums[i].end());
                    maxNum = max(maxNum, rowMax);
                    nums[i].erase(find(nums[i].begin(), nums[i].end(), rowMax));

                    if (nums[i].empty()) {
                        nums.erase(nums.begin() + i);
                        i--;
                    }
                }
            }

            score += maxNum;
        }

        return score;
    }
};
