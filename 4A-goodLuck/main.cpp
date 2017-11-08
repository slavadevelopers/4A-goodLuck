#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a % 5 == 0 && (a > 999 && a < 9999) || (a < -999 && a > -9999)) {
        cout << "SUCCESS" << endl;
    } else {
        cout << "FAILURE" << endl;
    }
    return 0;
}
