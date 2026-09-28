#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Koyta element dibe (array size): ";
    cin >> n;

    int arr[n];
    cout << "Array-er " << n << "ta element dao (sorted order-e dite hobe): " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int search;
    cout << "Ki number khujte chao: ";
    cin >> search;

    int output = binarySearch(arr, 0, n - 1, search);

    if (output != -1) {
        cout << "Element found at index " << output << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
//(left + right) / 2	বড় array-তে left + right overflow করতে পারে
//left + (right - left) / 2	কখনো বড় intermediate value তৈরি হয় না, তাই safe

/*int mid = left + (right - left) / 2 ei line er kaj er bekkha:

এখানে argument গুলো এভাবে পাঠানো হচ্ছে:

Parameter	পাঠানো Value	মানে
arr[]	arr	তোমার {1,2,3,4,5,6,7,8,9,10} array-টা
left	0	array-এর প্রথম index থেকে খোঁজা শুরু হবে
right	9	array-এর শেষ index (কারণ array-তে 10টা element, index 0 থেকে 9 পর্যন্ত)
x	search	যার value 7, অর্থাৎ 7 কে খুঁজতে হবে

কী ঘটে ভেতরে:

ফাংশনের ভেতরে left = 0, right = 9 নিয়ে loop শুরু হয়।
mid বের হয়, arr[mid] কে 7-এর সাথে তুলনা করা হয়।
যদি মিলে যায় → সেই index (এখানে 6, কারণ arr[6] = 7) return হয়।
যদি খুঁজে না পাওয়া যায় → -1 return হয়।*/
