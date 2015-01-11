#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int m,v,n,flag=1;
    cin>>m>>v;
    vector<int> a;
    for (int i = 0; i < m; i++)
    {
        cin>>n;
        a.push_back(n);
    }
    sort(a.begin(),a.end());
    n = 0;
    for (int i = 0; i < m; i++)
    {
        if (i < m - 1){
            n+=a[i];
            if (n > v)
            {
                cout<<"NO";
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
    {
        cout<<"YES";
    }

    return 0;
}
