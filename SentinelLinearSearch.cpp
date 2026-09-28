#include <iostream>
#include <vector>

using namespace std;

// Sentinel Linear Search Function
int sentinelLinearSearch(vector<int>& arr, int n, int k) {
    // 1. Array er shobshesh element ke temporary store kora
    int last = arr[n - 1];

    // 2. Array er shesh ghore search value (k) ke boshano (Sentinel)
    arr[n - 1] = k;

    int i = 0;
    // 3. Ekhane 'i < n' check korar dorkar nai! Shorashori check hobe
    while (arr[i] != k) {
        i++;
    }

    // 4. Array er shobshesh element ke ager obosthay ferot neowa
    arr[n - 1] = last;

    // 5. Element paowa geche kina ta confirm kora
    if (i < n - 1 || arr[n - 1] == k) {
        return i; // Element paowa geche
    }

    return -1; // Element paowa jayni
}

int main() {
    int n, k;

    cout << "Enter the size of the array (n): ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the value to search (k): ";
    cin >> k;

    int resultIndex = sentinelLinearSearch(arr, n, k);

    if (resultIndex != -1) {
        cout << "\nElement " << k << " found at index: " << resultIndex << endl;
    } else {
        cout << "\nElement " << k << " not found in the array (Index: -1)" << endl;
    }

    return 0;
}
