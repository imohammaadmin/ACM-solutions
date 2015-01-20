#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <set>
#include <stack>
#include <string>
#include <sstream>

#define MohammadAmin main()

using namespace std;


int MohammadAmin{
    int t;
    cin >> t;
    while ( t > 0 ){
        string a;
        cin >> a;
        if ( a.length() > 10 ){
            cout << a[0] << a.length() - 2 << a[ a.length() - 1 ] << endl;
        }else{
            cout << a << endl;
        }
        t--;
    }
	return 0;
}
