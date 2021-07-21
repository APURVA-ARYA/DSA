#include<iostream>
#include<algorithm>
using namespace std;

int maxProfit( int prices[]) {
  int  profit=0;
   int buyprice = prices[0];
for(int i=1;i<5;i++){
   
 buyprice=min(buyprice,prices[i]);
 profit=max(profit,prices[i]-buyprice);

}

return profit;
        
    }


int main(){
    int price[] = {1,60,4,300,1};
  
    cout<<"\nmaxm profit is "<<maxProfit(price)<<endl;
return 0;

}