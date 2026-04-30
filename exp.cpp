#include <iostream>
using namespace std;

void display(int arr[], int n) {
    cout << "Array elements are:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100], n, i, choice, pos, val;
cout << "Enter number of elements: ";
cin >> n;

 cout << "Enter elements:\n";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n1. Traversal\n2. Insertion\n3. Deletion\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1: 
                display(arr, n);
                break;

            case 2: 
                cout << "Enter position (0 to " << n << "): ";
                cin >> pos;
                cout << "Enter value: ";
                cin >> val;

                for(i = n - 1; i >= pos; i--) {
                    arr[i + 1] = arr[i];
                }
                arr[pos] = val;
                n++;

                cout << "Array after insertion:\n";
                display(arr, n);
                break;

            case 3: 
                cout << "Enter position (0 to " << n-1 << "): ";
                cin >> pos;

                for(i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;

                cout << "Array after deletion:\n";
                display(arr, n);
                break;

            case 4:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 4);

    return 0;
}
