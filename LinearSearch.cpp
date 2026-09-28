#include <iostream>
#include <vector>

using namespace std;

// Linear search function: element paowa gele index, na paowa gele -1 return korbe
int linearSearch(const vector<int>& arr, int n, int k) {
    int index = -1; // Default value -1 rakha hoyeche (mane: paowa jayni)

    // Array er shuru theke shesh porjonto protiti element check korar loop
    for (int i = 0; i < n; ++i) {
        // Desired value (k) paowa gele index save kore loop thamiye dewa hocche
        if (arr[i] == k) {
            index = i;
            break;
        }
    }

    return index;
}

int main() {
    int n, k;

    // User er kashe theke array er size grohon
    cout << "Enter the size of the array (n): ";
    cin >> n;

    vector<int> arr(n);

    // User er kashe theke array er elements grohon
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // User er kashe theke search value (k) grohon
    cout << "Enter the value to search (k): ";
    cin >> k;

    // Linear search function call
    int resultIndex = linearSearch(arr, n, k);

    // Search result er upor vitti kore output dekhao
    if (resultIndex != -1) {
        cout << "\nElement " << k << " found at index: " << resultIndex << endl;
    } else {
        cout << "\nElement " << k << " not found in the array (Index: -1)" << endl;
    }

    return 0;
}
