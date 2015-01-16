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
    string str;
    int Uppers = 0, Lowers = 0;
    cin >> str;
    for ( int i = 0; i < str.length(); i++ ){
        if ( isupper(str[i]) ){
            Uppers++;
        }else if ( islower(str[i]) ){
            Lowers++;
        }
    }
    if ( Uppers > Lowers ){
        for ( int i = 0; i < str.length(); i++ ){
            cout << (char)toupper( str[i] );
        }
    }else{
        for ( int i = 0; i < str.length(); i++ ){
            cout << (char)tolower( str[i] );
        }
    }
	return 0;
}
