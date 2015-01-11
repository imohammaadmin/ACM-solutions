#include <iostream>
#define MohammadAmin main()
using namespace std;


int MohammadAmin{
    int n;
    cin >> n;
    int result = 1;
    if ( n < 10 ){
        result = 2;
    }
    if ( n == 0 ){
        result = 4;
    }
    while ( n > 0 ){
        int a = n % 10;
        n /= 10;
        int m;
        if ( a == 0 ){
            m = 2;
        }
        else if ( a == 1 ){
            m = 7;
        }
        else if ( a == 2 ){
            m = 2;
        }
        else if ( a == 3 ){
            m = 3;
        }
        else if ( a == 4 ){
            m = 3;
        }
        else if ( a == 5 ){
            m = 4;
        }
        else if ( a == 6 ){
            m = 2;
        }
        else if ( a == 7 ){
            m = 5;
        }
        else if ( a == 8 ){
            m = 1;
        }
        else if ( a == 9 ){
            m = 2;
        }
        result = result * m;
    }
    cout << result;
	return 0;
}
