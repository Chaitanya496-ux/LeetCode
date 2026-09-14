class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score = 0;
        int left = 0;
        int maxscore = 0;
        int right = tokens.size()-1;
        sort(tokens.begin() , tokens.end());
        while(left<= right){
            if(power >= tokens[left]){
                power -= tokens[left];
                score += 1;
                left += 1;
                maxscore = max(maxscore,score);
            }else if(score > 0 ){
                power += tokens[right];
                score -= 1;
                right -= 1;

            }else{
                break;
            }
        }
        return maxscore;
        
    }
};