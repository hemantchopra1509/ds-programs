#include<iostream>
using namespace std;

int main() 
{

    int i, temp, n, arr[100];
	
    cout << "Enter array size:";
    cin>>n;

    cout << "Enter numbers:";
    for (i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }
    i = 0;
    while (i < n - 1) {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        i = i + 2;
    }

    cout << "Array List after Swapping:";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
