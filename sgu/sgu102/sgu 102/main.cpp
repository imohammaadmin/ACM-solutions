#include <iostream>
using namespace std;

#define MohammadAmin main()


int gcd ( int a, int b )
{
    if ( a==0 ) return b;
    return gcd ( b%a, a );
}

int MohammadAmin{
    int n, coprimes = 0;
    cin >> n;
    for ( int i = 1; i <= n; i++ ){
        if ( gcd ( n, i ) == 1 ){
            coprimes++;
        }
    }
    cout << coprimes;
    return 0;
}
