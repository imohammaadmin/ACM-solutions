#include <iostream>
#include <math.h>
#define MohammadAmin main()
using namespace std;

int f( int n ){
    int ret = 1;
    while ( n > 0 ){
        ret *= n % 10;
        n /= 10;
    }
    return ret;
}

int MohammadAmin{
    int n = 0, K;
    cin >> K;
    for ( int i = int(pow( (double)10, (double)K-1 )); i < int(pow( (double)10, (double)K )); i++ ){
        //cout << " f(" << i << ") is " << f(i) << endl;
        if ( f(i) != 0 && f(i+1) != 0 ){
            if ( i % f(i) == 0 && (i+1) % f(i+1) == 0 ){
                n++;
                cout << " f(" << i << ") is " << f(i) << endl;
                cout << "\t" << i << endl;
            }
        }
    }
    cout << n;
    
	return 0;
}
