#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
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
    if ( n % 2 == 0 && n > 2 ){
        cout << "YES";
    }else{
        cout << "NO";
    }
	return 0;
}
