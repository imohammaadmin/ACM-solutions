#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <set>
#include <stack>
#include <string>
#include <sstream>

#define MohammadAmin main()

using namespace std;


int MohammadAmin{
    int n, t;
    vector<int> a;
    a.push_back(-1);
    cin >> n >> t;
    bool flag = false;
    for ( int i = 1; i < n; i++ ){
        a.push_back(0);
        cin >> a[i];
    }
    for ( int i = 1; i <= n; ){
        if ( i > t ){
            flag = 0;
            break;
        }else if ( i == t ){
            flag = 1;
            break;
        }else if ( i < n ){
            i += a[i];
        }//else{
            
        //}
    }
    if ( flag ){
        cout << "YES";
    }else{
        cout << "NO";
    }
	return 0;
}
