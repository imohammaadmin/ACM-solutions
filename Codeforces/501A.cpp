#include <iostream>
#define MohammadAmin main()
using namespace std;

#define max(a,b) ( a >= b ? a : b )

int MohammadAmin{
    int Misha = 0;
    int Vasya = 0;
    int a, c;
    int b, d;
    cin >> a >> b >> c >> d;
    Misha = max( 3 * a / 10, a - a / 250 * c );
    Vasya = max( 3 * b / 10, b - b / 250 * d );
    if ( Misha > Vasya ){
        cout << "Misha";
    }else if ( Vasya > Misha ){
        cout << "Vasya";
    }else{
        cout << "Tie";
    }
	return 0;
}
