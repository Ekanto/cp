#include<iostream>

using namespace std;

int main(){
    int a,n,c;
    cin >> a >> n >> c; //3 385 479
    cout << ((a%c) * (n%c)) % c;
}