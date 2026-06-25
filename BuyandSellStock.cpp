#include<iostream>
#include<vector>
using namespace std;
int maProfit(vector<int>& prices) {
        int minp = prices[0];
        int maxp = 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i] < minp){
                minp = prices[i];
            }
            else{
                int p = prices[i] - minp;
                if(p > maxp){
                    maxp = max(maxp,p);
                }
            }
        }
        return maxp;
    }
int main(){
    vector<int>vec = {7,1,5,3,6,4};
    cout<<maProfit(vec);
}