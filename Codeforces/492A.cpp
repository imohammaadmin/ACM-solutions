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


long long int getCubes( long long int h ){
    long long int ret = 0;
    for ( int i = 1; i <= h; i++ ){
        ret += i * (i+1) / 2;
    }
    return ret;
}

int MohammadAmin{
    int n;
    cin >> n;
    long long int lb = -10000, ub = 10000;
    while ( lb < ub - 1 ){
        long long int height = (lb + ub) / 2; long long int cubes = getCubes(height);
        if ( cubes > n ){
            ub = height;
        }else{
            lb = height;
        }
    }
    cout << lb;
	return 0;
}
