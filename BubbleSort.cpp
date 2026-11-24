#include <iostream>
using namespace std;

// Optimized Bubble Sort Function
void bubbleSort(int A[], int n) {
    int totalPasses = 0;
    int totalComparisons = 0;
    int totalSwaps = 0;

    cout << "\n=== OPTIMIZED BUBBLE SORT PROCESSING ===" << endl << endl;

    for (int i = 0; i < n - 1; i++) {
        totalPasses++;
        int comparisonsInPass = 0;
        int swapsInPass = 0;
        int flag = 0; // Flag variable to track swaps

        cout << "Pass " << totalPasses << ":" << endl;

        for (int j = 0; j < n - 1 - i; j++) {
            comparisonsInPass++;
            totalComparisons++;

            if (A[j] > A[j + 1]) {
                // Swapping elements
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;

                flag = 1;
                swapsInPass++;
                totalSwaps++;
            }
        }

        // Current state of the array in this pass
        cout << "  Current state of array : [ ";
        for (int k = 0; k < n; k++) {
            cout << A[k] << " ";
        }
        cout << "]" << endl;
        cout << "  Inner loop comparisons : " << comparisonsInPass << " times" << endl;
        cout << "  Swaps performed        : " << swapsInPass << " times" << endl;

        // Break early if no swaps occurred (Optimized condition)
        if (flag == 0) {
            cout << "  -> [Optimized Break] No more swaps needed, array is sorted!" << endl;
            break;
        }
        cout << "------------------------------------------" << endl;
    }

    // Summary Report
    cout << endl << "================ SUMMARY REPORT ================" << endl;
    cout << "Total Outer Loops (Passes)     : " << totalPasses << " times" << endl;
    cout << "Total Inner Loops (Comparisons): " << totalComparisons << " times" << endl;
    cout << "Total Swaps Performed          : " << totalSwaps << " times" << endl;
    cout << "=================================================" << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int A[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "\nBefore sorting: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    // Call Bubble Sort Function
    bubbleSort(A, n);

    cout << "\nAfter sorting: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
