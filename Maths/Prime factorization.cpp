#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n,cnt(0);
    cin >> n;
    for(int i=2;i<=sqrt(n);++i){
        if(n%i==0){
            
            while(n%i==0){
                n/=i;
                cnt++;
            }
            cout << i << "^" <<  cnt << " ";
        }

    }
    if(n!=1) cout << n << "^" <<  cnt;
}