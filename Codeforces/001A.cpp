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
    long long int n, m, a;
    cin >> n >> m >> a;
    a = ceil( (double)n / (double)a ) * ceil( (double)m / (double)a );
    cout << a;
	return 0;
}
