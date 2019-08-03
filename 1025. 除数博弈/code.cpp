class Solution {
public:
    bool divisorGame(int N) {
    /********思路一*********
        if(N == 0 || N == 1)
            return false;
        
        for(int i = 1; i < N; i++)
        {
            if(N % i == 0)
                return !divisorGame(N-i);
        }
        return false;
    **********************/
    /********思路二*********/
        retrun (N%2) == 0;
    }
};
