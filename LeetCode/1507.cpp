class Solution {
public:
    string reformatDate(string date) {
        string months[12]={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

        stringstream ss(date);
        int day;
        string yearstr, monthstr, daystr;

        ss>>day>>daystr>>monthstr>>yearstr;
        
        for(int i=0; i<12; i++){
            if(months[i]==monthstr){
                if(i+1<10) monthstr="0"+to_string(i+1);
                else monthstr=to_string(i+1);
                break;
            }
        }
        
        if(day<10) daystr="0"+to_string(day);
        else daystr=to_string(day);

        return yearstr+"-"+monthstr+"-"+daystr;
    }
};
