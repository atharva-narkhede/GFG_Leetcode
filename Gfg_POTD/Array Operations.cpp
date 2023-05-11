//Array Operations gfg problem of the day potd
//https://practice.geeksforgeeks.org/problems/3a93b6a25a7b88e4c80a1fee00898fd8022eb108/1
//gfg 12 May 2023 POTD



class Solution {
public:
    int arrayOperations(int n, vector<int> &arr) {
        int i=0;
        int count=0;
        while(i<n)
        {
            bool flag=false;
            while(i<n && arr[i]!=0)
            {
                flag=true;
                i++;
            }
            if(flag==true) // atleast one element is there
            {
                count++;
            }
            while(i<n && arr[i]==0)
            {
                i++;
            }
        }
        return count;
    }
};
