class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score = 0;
        int left = 0;
        int right = tokens.size()-1;
        while(left<= right){
            if(power >= tokens[left]){
                power -= tokens[left];
                score += 1;
                left += 1;
            }else if(score < 0 ){
                power += tokens[right];
                score -= 1;
                right -= 1;

            }else{
                break;
            }
        }
        return score;
        
    }
};