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


int min( unsigned long a, unsigned long b){
    return ( a > b ? (int)b : (int)a );
}

int MohammadAmin{
    int n;
    vector<int> a, talents[3]; // abilities
    cin >> n;
    for ( int i = 0; i < n; i++ ){
        a.push_back(0);
        cin >> a[i];
        talents[ a[i] - 1 ].push_back(i + 1);
        //cout << " " << a[i] << endl;
    }
    
    //cerr << talents[0].size() << " " << talents[1].size() << " " << talents[2].size() << endl;
    
    int w = min ( talents[0].size(), min(talents[1].size(), talents[2].size()) );
    cout << w << endl;
    
    for ( int i = 0; i < w; i++ ){
        for ( int j = 0; j < 3; j++ ){
            cout << talents[j][i];
            if ( j == 2 )
                cout << endl;
            else
                cout << ' ';
        }
    }
	return 0;
}
