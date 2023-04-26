//Seating Arrangement GFG POTD geeksforgeeks

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& s){
        // Write your code here.
        
        if(n>m){
            return false;
        }
        
        if(s[0]==0 && s[1]==0){
            n--;
            s[0]=1;
        }
        
        for(int i=1;i<m-1;i++){
            if(s[i+1]==0 && s[i-1]==0 && s[i]==0){
                n--;
                s[i]=1;
            }
            else{
                continue;
            }
        }
        
        if(s[m-1]==0 && s[m-2]==0){
            n--;
        }
        
        if(n<=0){
            return true;
        }
        return false;
    }
};
