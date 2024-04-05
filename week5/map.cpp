#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    map <string, int> mp;
    int n; cin >> n;
    while(n--)
    {
        int t, y;
        string x;
        cin >> t;
        if(t == 1) 
        {
            cin >> x >> y;
            // mp.insert(make_pair(x, y));
            mp[x] += y;
        }
        else if(t == 2) 
        {
            cin >> x;
            mp.erase(x);
        }
        else 
        {
            cin >> x;
            map <string, int> :: iterator it = mp.find(x);
            if(it != mp.end()) cout << it -> second << endl;
            else cout << 0 << endl;
        }
    }  
    return 0;
}



