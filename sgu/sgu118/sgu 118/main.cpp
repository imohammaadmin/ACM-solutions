#include <iostream>
#include <vector>

using namespace std;

#define MohammadAmin main()

int MohammadAmin{
    int K;
    cin >> K;
    for ( int i = 0; i < K; i++ ){
        int n;
        vector<int> a;
        cin >> n;
        for ( int j = 0; j < n; j++ ){
            a.push_back( 0 );
            cin >> a[j];
        }
        if ( a[0] == 0 ){
            cout << 0;
            continue;
        }else{
            int root = 0;
            for ( int j = n - 1; j >= 0; --j ){
                root = ( root + 1 ) * a[j] % 9;
            }
            cout << ( root == 0  ? 9 : root );
        }
    }
    return 0;
}


#include <cstdio>
#include <cstring>
            using namespace std;
            
            int main() {
                int test_count;
                scanf("%d", &test_count);
                while (test_count > 0) {
                    test_count --;
                    int n;
                    scanf("%d", &n);
                    int a[n];
                    for (int i = 0; i < n; ++ i) {
                        scanf("%d", a + i);
                    }
                    if (a[0] == 0) {
                        puts("0");
                    } else {
                        int result = 0;
                        for (int i = n - 1; i >= 0; -- i) {
                            result = ((long long)result + 1) * a[i] % 9;
                        }
                        printf("%d\n", result == 0? 9: result);
                    }
                }
                return 0;
            }