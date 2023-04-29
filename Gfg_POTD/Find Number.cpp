//Find Number Gfg Geeksforgeeks Potd Problem of the day 
//https://practice.geeksforgeeks.org/problems/35bff0ee40090b092e97b02f649085bf1390cc67/1

class Solution{
public:
     long long findNumber(long long N) {
    // An array containing the last digit of the desired sequence
    int digits[] = {9, 1, 3, 5, 7};

    long long ans = 0;
    while (N > 0) {
        // Compute the next digit of the sequence and add it to ans
        ans = ans * 10 + digits[N % 5];

        // If the remainder is 0, we need to subtract 1 from N and divide it by 5
        if (N % 5 == 0) {
            N = N / 5 - 1;
        } else {
            N /= 5;
        }
    }

    queue<int> q;
    // Extract the digits of ans and store them in a queue
    while (ans > 0) {
        q.push(ans % 10);
        ans /= 10;
    }

    ans = 0;
    // Reconstruct ans by removing digits from the queue
    while (!q.empty()) {
        ans = ans * 10 + q.front();
        q.pop();
    }
    return ans;
}
};
