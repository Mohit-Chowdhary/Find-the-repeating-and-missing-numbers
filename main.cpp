#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int xor0 = 0;
        int xor1 = 0;
        int sum = 0;
        for(int i=0;i<n;i++) {
            cin>>a[i];

            xor0 ^= a[i];
            xor1 ^= (i+1);
            sum += a[i];
        }

        int xor2 = (xor0^xor1);

        int sum1 = n*(n+1)/2 - sum;
        int sum2 = abs(sum1);

        for(int i=1; i<=n-sum2; i++){
            if( xor2 == ((i+sum2)^i) ){
                if(sum1<0){
                    cout<<i+sum2<<" "<<i<<endl;
                }
                else{
                    cout<<i<<" "<<i+sum2<<endl;
                }
                break;
            }
        }
    }

    return 0;
}
