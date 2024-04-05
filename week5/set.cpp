#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set <int> s;
    int n; cin >> n;
    while(n--)
    {
        int x, y;
        cin >> x >> y;
        if(x == 1) s.insert(y);
        else if(x == 2) s.erase(y);
        else 
        {
            set <int> :: iterator itr = s.find(y);
            if(itr == s.end()) cout << "No" << endl;
            else  cout << "Yes" << endl;
        }
    }   
    return 0;
}



