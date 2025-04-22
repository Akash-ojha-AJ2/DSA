//50. Pow(x, n)
#include<iostream>
#include<math.h>
using namespace std;
class Solution {
    public:
        double myPow(double x, int n) {
            double ans = pow(x,n);
            cout<<ans;
            
            
        }
    };

int main(){
    Solution S1;
    S1.myPow(5,4);
}