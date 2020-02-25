class Solution {
public:

    int dis(const vector<int> &pa, const vector<int> &pb){
        return (pa[0]-pb[0])*(pa[0]-pb[0])+(pa[1]-pb[1])*(pa[1]-pb[1]);
    }

    int numberOfBoomerangs(vector<vector<int>>& points) {
        int res=0;
        for(int i=0; i<points.size(); i++){
            unordered_map<int, int> record;
            for(int j=0; j<points.size(); j++){
                if(j!=i){
                    record[dis(points[i], points[j])]++;
                }
            }

            for(auto it=begin(record); it!=end(record); it++){
                res+=(it->second)*(it->second-1);
            }
        }

        return res;
    }
};
