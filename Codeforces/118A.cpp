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

bool isVowel ( char ch ){
    return ( ch == 'a' || ch == 'o' || ch == 'y' || ch == 'e' || ch == 'u' || ch == 'i' );
}

int MohammadAmin{
    string s;
    cin >> s;
    int size = (int)s.length();
    for ( int i = 0; i < size; i++ ){
        s[i] = tolower( s[i] );
        if ( !isVowel(s[i]) ){
            cout << '.' << s[i];
        }
    }
	return 0;
}
