#include<iostream>
#include<vector>
using namespace std;

int catlan(int n) {
vector<int> dp(n+1,0);
    dp[0] = 1;        
    dp[1] = 1;
    for (int i=2;i<=n;i++) {
        for (int j=0;j<i;++j) {
            dp[i]+=dp[j]*dp[i-j-1];
        }
    }
    return (int)dp.back();
}

int main(){
int n=9;
cout<<"catalan of given number is "<<endl;
cout<<catlan(n)<<endl;
    return 0;
}