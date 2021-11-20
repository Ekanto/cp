#include<bits/stdc++.h>

using namespace std;

int main(){
   vector <int> v;
   vector <int>::iterator it;
   int n,input;
   cin >> n;

   for(int i=1;i<=n;++i){
      cin >> input;
      v.push_back(input);
   }

   for(it=v.begin();it!=v.end();++it){
      cout << *it;
   }


}
