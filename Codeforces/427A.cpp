#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int untreated = 0;
    int officers = 0;
    for(int i = 0; i<n; i++)
    {
        int x;
        cin>>x;
        if (x<0)
        {
            if (officers == 0)
                untreated++;
            else
                officers--;
        }else
            officers+=x;
    }
    //for (
    cout<<untreated;
    return 0;
}
