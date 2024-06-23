#include "bits/stdc++.h"
using namespace std;

int main() {  

        int n;
        
        cin >> n;
        
        vector<long long> a(n), p(n);
        
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        
        
        for(int i = 0; i < n; ++i) {
            p[i] = (i ? p[i - 1] : 0) + a[i];
        }
        
        for(auto i:p)cout<<i<<" ";
        
       
}   
