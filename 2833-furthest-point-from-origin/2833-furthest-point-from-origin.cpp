class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int null=0,both=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L') null++;
            if(moves[i]=='R') null--;
             if(moves[i]=='_') both++;
        }
        int ans= abs(null) + both ;
        return ans;

    }
};