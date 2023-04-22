class Solution {
public:
    int minimumNumber(int n, vector<int>& arr) {
        // Find the GCD of all the elements in the array
        int gcd = arr[0];
        for (int i = 1; i < n; i++) {
            gcd = __gcd(gcd, arr[i]);
        }
        // Return the GCD as the answer
        return gcd;
    }
};
