class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int i=m-1, j=n-1;
        int p=m+n-1;
        while(i>=0 && j>=0){
            if(A[i]>=B[j]){
                A[p--]=A[i--];
            }
            else{
                A[p--]=B[j--];
            }
        }
        while(j>=0){
            A[p--]=B[j--];
        }
    }
};
