#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <set>
#include <stack>
#include <string>
#include <sstream>

#define MohammadAmin main()

using namespace std;


int MohammadAmin{
    int n;
    cin >> n;
    if ( n % 2 == 0 ){
        cout << 8 << n - 8;
    }else{
        cout << 9 << n - 9;
    }
	return 0;
}
