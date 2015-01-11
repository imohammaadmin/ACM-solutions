#include <iostream>
#include <vector>

#define MohammadAmin main()

using namespace std;

vector<bool> flag;

int sumOfDigits ( int n ){
    int s = 0;
    while ( n > 0 ){
        s += n % 10;
        n /= 10;
    }
    return s;
}

int d ( int n ){
    return n + sumOfDigits( n );
}

int MohammadAmin{
    int n, K, noG = 0;
    vector<int> S, a;
    cin >> n >> K;
    for ( int i = 0; i < K; i++ ){
        S.push_back( 0 );
        cin >> S[i];
    }
    for ( int i = 1; i <= n + 1; i++ ){
        flag.push_back(false);
    }
    for ( int i = 1; i <= n; i++ ){
        int x = d(i);
        if ( x <= n){
            flag[x] = true;
        }
    }
    for ( int i = 1; i <= n; i++ ){
        if (!flag[i]){
            noG++;
            a.push_back(i);
        }
    }
    cout << noG << endl;
    for ( int i = 0; i < K; i++ ){
        cout << a[ S[i] - 1 ] << " ";
    }
    
    return 0;
}
