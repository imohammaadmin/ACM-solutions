#include <iostream>
#include <vector>
#include <set>

#define MohammadAmin main()

using namespace std;


int MohammadAmin{
    int n;
    vector<int> a;
    cin >> n;
    for ( int i = 0; i < n; i++ ){
        a.push_back(0);
        cin >> a[i];
    }
    set<int> s1, s2;
    s1.insert(a[0]);
    set<int> m;
    m.insert(a[0]);
    for ( int i = 1; i < n; i++ ){
        set<int> :: iterator it = s1.begin();
        s2.insert(a[i]);
        for ( ; it != s1.end(); it++ ){
            s2.insert((*it)|a[i]);
        }
        it = s2.begin();
        for ( ; it != s2.end(); it++ ){
            m.insert(*it);
        }
        s1 = s2;
        s2.clear();
    }
    
    cout << m.size();
	return 0;
}