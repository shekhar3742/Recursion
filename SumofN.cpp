#include <iostream>
using namespace std;

int add = 0;
void sum(int N)
{
    if (N < 1)
    {
        cout << add << endl;
        return;
    }

    add = add + N;
    sum(N - 1);
}
int main()
{
    int N;
    cout << "Enter N :" << endl;
    cin >> N;
    sum(N);
    return 0;
}