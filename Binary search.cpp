#include <bits/stdc++.h>
using namespace std;

bool binary_search(const vector<int>& a, int x){
    int lo=0, hi=a.size()-1;
    bool exst=false;
    while(lo<=hi){
        int mid = lo + (hi - lo) / 2;
        if(x==a[mid]) return true;
        if(x<a[mid]) hi=mid-1;
        if(x>a[mid]) lo=mid+1;
    }
    return exst;
}

int main(){
    vector<int> arr = {1, 3, 4, 6, 8, 10, 15};
    vector<int> tests = {4, 5, 10, 11, 1, 15, 0};

    for (int x : tests){
        cout << "Searching for " << x << ": "
             << (binary_search(arr, x) ? "Found" : "Not found") << endl;
    }
    return 0;
}
