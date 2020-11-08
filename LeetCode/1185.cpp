class Solution {
public:
    string dayOfTheWeek(int d, int m, int y) {
        string s[7]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        if(m==1||m==2){
            m+=12;
            y--;
        }
        int w=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7;
        return s[w];
    }
};
