#include <iostream>

using namespace std;

int main()
{

    int m, n;


    cout << "enter num1: ";
    cin >> m;
    cout << "enter num2: ";
    cin >> n;




    for (int i = 1; i <= m; i++) {

        for (int j = 1; j <= n; j++) {
            cout << i << " × " << j << " = " << (i * j) << "\t";

        }
        cout << endl;
    }


    return 0;
}
