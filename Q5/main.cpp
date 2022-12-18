#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[1000]{};

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] == i + 1)
        {
            cout << arr[i];
            break;
        }
    }
    return 0;
}