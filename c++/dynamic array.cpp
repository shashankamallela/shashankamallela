#include <iostream>
using namespace std;
int main()
{
    int* p = new int[5];
    for (int i = 0; i < 5; i++) {
        p[i] = 10 * (i + 1);
    }
    cout << *p << endl;
    cout << *p + 1 << endl;
    cout << *(p + 1) << endl;
    cout << 2 [p] << endl;
    cout << p[2] << endl;
    *p++;
    cout << *p;
 
    return 0;
}

