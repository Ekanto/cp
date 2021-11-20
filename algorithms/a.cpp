#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,SUM,tar;
    cin >> n >> tar;
    int arr[n];
    int left = 0;
    int right = n-1;

    for(int i = 0;i<n;++i){
        cin >> arr[i];
    }
    while(left < right){
        SUM = arr[left] + arr[right];
        if(SUM > tar ) right--;
        else if(tar > SUM){
            left++;
        }
        else if (SUM == tar)
        {
            cout << left << " " << right;
            break;
        }
        
    }

}