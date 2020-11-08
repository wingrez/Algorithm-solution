const int MAXN=10000000+10;
int vis[MAXN];  //标记，1：合数，0：1或质数，初始化全0

class Solution {
public:
    
    void sieve(int n){
        int m=(int)sqrt(n+0.5); //避免浮点误差 
        for(int i=2;i<=m;i++){
            if(vis[i]==0){
                for(int j=i*i;j<=n;j+=i){
                    vis[j]=i;
                } 
            }
        }
    }

    int countPrimes(int n) {
        sieve(n);
        int c=0;
        for(int i=2;i<n;i++){
            if(vis[i]==0){
                c++;
            }
        }
        return c;
    }
};
