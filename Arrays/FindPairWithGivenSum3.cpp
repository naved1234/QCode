#include <bits/stdc++.h>
using namespace std;

void findPair(int a[], int n, int sum) {
    if (a == NULL || n == 0) {
        cout << "Error either array point to NULL address or size of the array is zero"
        return;
    }
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++) {
        if (map.find(sum - a[i]) != map.end()) {
            cout << "Pair found at indices " << i << " and " << map[sum - a[i]];
            return;   
        }
        map[a[i]] = i;
    }
    cout << "No pair with the given sum was found" << endl;
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
