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
    string a;
    cin >> a;
    bool flag = true;
    for ( int i = 1; i < a.length(); i++ ){
        if ( islower(a[i]) ){
            flag = 0;
        }
        if ( !flag ){
            break;
        }
    }
    if ( !flag || a.length() > 1 ){
        cout << a;
    }else{
        for ( int i = 0; i < a.length(); i++ ){
            if ( islower(a[i]) ){
                cout << char( toupper(a[i]) );
            }else{
                cout << char ( tolower(a[i]) );
            }
        }
    }
	return 0;
}
