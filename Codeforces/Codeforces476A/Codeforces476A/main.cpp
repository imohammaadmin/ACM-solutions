#include <iostream>
#define MohammadAmin main()
using namespace std;


int MohammadAmin{
    int output = -1;
    int n, m;
    cin >> n >> m;
    for ( int i = 1; i <= n; i++ ){
        if ( i % m == 0 ){
            if ( 2 * i >= n ){
                output = i;
                break;
            }
        }
    }
    cout << output;
	return 0;
}
