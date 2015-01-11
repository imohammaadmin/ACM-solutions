#include <iostream>
//#include <vector>

#define MohammadAmin main()

using namespace std;


int find(int n,int q){
    if (n==1) return 1;
    int k = n/2;
    if (q>k) return find(n-k,n+1-q);
    else return n-k+find(k,k+1-q);
}

int MohammadAmin{
    int n, q;
    cin>> n >> q;
    cout << find( n, q );
	return 0;
}
