#include <iostream>
#include <vector>
#include <string>

#define MohammadAmin main()

using namespace std;


bool endsWith(const string& s, const string& suffix){
    return s.size() >= suffix.size() && s.rfind(suffix) == (s.size()-suffix.size());
}

bool strEnds ( string str, string suf ){
    bool flag = true;
    if ( str.size() < suf.size() ) return false;
    for ( int i = str.size() - suf.size(); i < str.size(); i++ ){
        if ( str[i] != suf[i - ( str.size() - suf.size() )] ){
            flag = false;
        }
    }
    return flag;
}

int MohammadAmin{
    int n;
    string ei[] = {"ch", "x", "s", "o", "f", "fe", "y", ""}, eo[] = {"ches", "xes", "ses", "oes", "ves", "ves", "ies", "s"};
    cin >> n;
    for ( int i = 0; i < n; i++ ){
        string output, input;
        cin >> input;
        for ( int j = 0; j < 8; j++ ){
            if ( strEnds( input, ei[j] ) ){
                for ( int k = 0; k < input.size() - ei[j].size(); k++ ){
                    output += input[k];
                    cerr << output << "\t" << input[k] << endl;
                }
                for ( int k = int(input.size() - ei[j].size()); k < input.size() - ei[j].size() + eo[j].size(); k++ ){
                    output += eo[j][k];
                    cerr << output << "\t" << eo[j][k] << endl;
                }
            }
        }
        cout << output;
    }
    return 0;
}