#include <iostream>
using namespace std;
int moves=0;
void TOH(int n, int A, int B, int C)
{
    if(n > 0)
    {
        TOH(n - 1, A, C, B);

        cout << "Move a Disc from " << A << " to " << C << endl;
         moves++;
        TOH(n - 1, B, A, C);
    }
}

int main()
{
    int n;
    cin>>n;

    TOH(n, 1, 2, 3);

    cout << "\nTotal Moves = " << moves << endl;

    return 0;
}