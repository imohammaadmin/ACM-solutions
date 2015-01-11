#include <iostream>

#define MohammadAmin main()

using namespace std;


int Zeroes ( int n ){
    int z = 0;
    while ( n != 0 ){
        z += n / 5;
        n /= 5;
    }
    return z;
}

int MohammadAmin{
    int n, Q, lb = 1, ub = 400000015;//, min = 2147483647;
    cin >> Q;
    if ( Q == 0 ){
        cout << 1 << endl;
        return 0;
    }
    while ( lb < ub - 1 ){
        int zeroes = 0;
        n = ( lb + ub ) / 2;
        zeroes = Zeroes ( n );
        if( zeroes < Q ){
            lb = n;
        }else{
            ub = n;
        }
    }
    if ( Zeroes( ub ) == Q ){
        cout << ub << endl;
    }else{
        cout << "No solution";
    }
    return 0;
}
