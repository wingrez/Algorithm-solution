class Solution {
public:
    int romanToInt(string s) {
        unordered_map<string, int> mymap;
        mymap["I"]=1;
        mymap["V"]=5;
        mymap["X"]=10;
        mymap["L"]=50;
        mymap["C"]=100;
        mymap["D"]=500;
        mymap["M"]=1000;
        mymap["IV"]=4; mymap["IX"]=9;
        mymap["XL"]=40; mymap["XC"]=90;
        mymap["CD"]=400; mymap["CM"]=900;
        
        int i=0;
        int ans=0;
        while(i<s.size()){
            if(mymap.find(s.substr(i,2))!=mymap.end()){
                ans+=mymap[s.substr(i,2)];
                i+=2;
            }
            else{
                ans+=mymap[s.substr(i,1)];
                ++i;
            }
        }
        return ans;
    }
};
