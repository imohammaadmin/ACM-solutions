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
    int n, k;
    cin >> n >> k;
    vector<int> a;
    for ( int i = 0; i < n; i++ ){
        a.push_back(0);
        cin >> a[i];
    }
    int i = 0;
    for ( i = 0; a[i] != 0 && i < n && a[i] >= a[k - 1]; i++ ){}
    cout << i;
	return 0;
}
