
#include <bits/stdc++.h>
using namespace std;

void segregate0and1(int arr[], int n) 
    {
        
    int count = 0; // Counts the no of zeros in arr
 
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == 0)
            count++;
    }
 for (int i = 0; i < count; i++)
        arr[i] = 0;
 
    
    for (int i = count; i < n; i++)
        arr[i] = 1;
        
     }


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
segregate0and1(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
} 
