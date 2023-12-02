#include <iostream>
using namespace std;
int main() {
  int n=5;
int arr[n]={1,2,3,4,5};
  int position=3;

for (int i = 0; i < n; i++) {
    cin >> arr[i];
}


    for (int i = position; i < n; i++) {
        arr[i] = arr[i + 1];
      n--;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

return 0;
}
