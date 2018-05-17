#include <bits/stdc++.h>
using namespace std;

void findPair(int a[], int n, int sum) {
    if (a == NULL || n == 0) return;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == sum) {
                cout << "Pair with given sum found at indices " << i << " and " << j << endl;
                return;
            }
        }
    }
    cout << "No such pair with given sum found" << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    int n, sum;
    cin >> n >> sum;
    int *a = new int[n];
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    findPair(a, n, sum);
    return 0;
}
