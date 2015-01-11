#include <iostream>

#define MohammadAmin main()

using namespace std;


void nearlyPrime ( int n ){
    int primes = 0;
    for ( int i = 2; i * i <= n; i++ ){
        while (n % i == 0) {
            primes++;
            n /= i;
        }
    }
    if (n > 1) {
        primes++;
    }
    if ( primes == 2 ){
        cout << "Yes";
    }else{
        cout << "No";
    }
}

int MohammadAmin{
    int n;
    cin >> n;
    for ( int k = 0; k != n; k++ ){
        int a;
        cin >> a;
        nearlyPrime(a);
        cout << endl;
    }
    return 0;
}
