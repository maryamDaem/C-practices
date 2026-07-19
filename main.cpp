#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cout << "Enter number of rows: ";
    cin >> row;

    cout << "Enter number of columns: ";
    cin >> col;

    int A[10][10], B[10][10], C[10][10];

    cout << "\nEnter elements of Matrix A:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "\nEnter elements of Matrix B:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> B[i][j];
        }
    }

    int choice;

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Sum of matrices\n";
        cout << "2. Multiply matrices\n";
        cout << "3. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            cout << "\nResult of Addition:\n";

            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    C[i][j] = A[i][j] + B[i][j];
                    cout << C[i][j] << " ";
                }
                cout << endl;
            }

            break;

        case 2:

            if (row != col)
            {
                cout << "Matrix multiplication requires square matrices in this program.\n";
                break;
            }

            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    C[i][j] = 0;

                    for (int k = 0; k < col; k++)
                    {
                        C[i][j] += A[i][k] * B[k][j];
                    }
                }
            }

            cout << "\nResult of Multiplication:\n";

            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    cout << C[i][j] << " ";
                }
                cout << endl;
            }

            break;

        case 3:
            cout << "Program ended.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 3);

    return 0;
}


