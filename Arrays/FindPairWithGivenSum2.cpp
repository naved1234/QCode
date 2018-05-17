#include <bits/stdc++.h>
using namespace std;

void findPair(int a[], int n, int sum) {
    if (a == NULL || n == 0) return;
    int low = 0, high = n - 1;
    sort(a, a + n);
    while (low < high) {
        if ((a[low] + a[high]) == sum) {
            cout << "Pair found at indices " << low << " and " << high << endl;
            return;
        }
        (a[low] + a[high] < sum) ? low++ : high--;
    }
    cout << "No such pair was found with the given sum" << endl;
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
