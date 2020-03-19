class Solution {
public:
    vector<int> constructRectangle(int area) {
        int L, W;
        for(W=sqrt(area); area%W!=0; W-- ){
            ;
        }
        return vector<int>{area/W, W};
    }
};
