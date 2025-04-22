#include<iostream>
#include<climits>
using namespace std;

int main(){
    int price[] = {7,1,5,3,6,4};
    int size = sizeof(price)/sizeof(int);

    int maxProfit = 0, bestBuy = price[0];

    for(int i = 1; i<size ; i++){
        if(price[i]>bestBuy){
            maxProfit = max(maxProfit, price[i]-bestBuy);
        }
        bestBuy = min(bestBuy,price[i]);
    }

    cout<<maxProfit;
}