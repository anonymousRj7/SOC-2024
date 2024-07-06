#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int cases;
    cin >> cases;
 
    while (cases--) {
        int size;
        cin >> size;
 
        int arr[size], brr[size];
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
 
        if (size == 1) {
            cout << -1 << endl;
            continue;
        }
 
        // Fill brr with indices starting from 1 to size
        for (int i = 0; i < size; i++) {
            brr[i] = i + 1;
        }
 
       
        // Ensure no element in brr matches the corresponding element in arr
        for (int i = 0; i < size; i++) {
            if (brr[i] == arr[i]) {
                if (i == size - 1) {
                    swap(brr[i], brr[i - 1]);
                } else {
                    swap(brr[i], brr[i + 1]);
                }
            }
        }
 
        // Output the result
        for (int i = 0; i < size; i++) {
            cout << brr[i] << " ";
        }
        cout << endl;
    }
 
    return 0;
}
