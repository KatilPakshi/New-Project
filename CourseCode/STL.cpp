#include <bits/stdc++.h>
using namespace std;

// bool cmp(int X, int Y) {
//     return X < Y;
// }

bool cmp(int X, int Y) {
    return X > Y;
}

int main()
{
    int A[] = {1,4,2,0,5,10,9};

    sort(A+0,A+7,cmp);

    for (int i = 0;i<=6;i++) {
        cout << A[i] <<" ";
    }
    cout << endl;
    return 0;
}