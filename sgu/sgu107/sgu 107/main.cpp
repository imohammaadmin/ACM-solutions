#include <iostream>
using namespace std;

#define MohammadAmin main()

int MohammadAmin{
    int n;
    cin >> n;
    if ( n < 9 ){
        cout << 0;
    }else if ( n == 9 ){
        cout << 8;
    }else{
        cout << 72;
        for ( int i = 0; i < n - 10; i++ ){
            cout << 0;
        }
    }
    return 0;
}
