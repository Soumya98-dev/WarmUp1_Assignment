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

    for (int i = 0; i < N; i += 2)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
