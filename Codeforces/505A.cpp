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


bool isPalindrome( string str ){
    bool flag = true;
    for ( int i = 0; i < str.length(); i++ ){
        if ( str[i] != str[ str.length() - i - 1] ){
            flag = false;
            break;
        }
    }
    return flag;
}

int MohammadAmin{
    string s;
    cin >> s;
    bool flag = false;
    int size = (int)s.length();
    for ( int i = 0; i <= size; i++ ){
        for ( int chCode = 0; chCode < 26; chCode++ ){
            string a, b;
            a = s.substr( 0, i );
            b = s.substr( 0 + i, size - i );
            //cerr << "A = " << a << "\t\t" << "B = " << b << "\t\t";
            a = a + char( chCode + 'a' ) + b;
            //cerr << "A = " << a << endl;
            if ( isPalindrome(a) ){
                flag = true;
                cout << a;
                break;
            }
        }
        if ( flag ){
            break;
        }
    }
    if ( !flag ){
        cout << "NA";
    }
    return 0;
}
