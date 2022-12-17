#include <iostream>
using namespace std;

int main()
{
    int N, X, count = 0;
    cin >> N;
    cin >> X;
    int arr[1000]{};
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] <= X)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}