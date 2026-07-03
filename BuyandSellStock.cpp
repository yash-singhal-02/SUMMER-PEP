#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int> arr){
    int minp = arr[0];
    int maxp = 0;
    for(int i=1;i<arr.size();i++){
        if(arr[i] < minp){
            minp = arr[i];
        }
        else{
            int p = arr[i] - minp;
            maxp = max(maxp,p);
        }
    }
    return maxp;
}
int main(){
    vector<int>vec = {7,1,5,3,6,4};
    cout<<maxProfit(vec);
}