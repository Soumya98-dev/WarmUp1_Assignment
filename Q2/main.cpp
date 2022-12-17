#include <iostream>
using namespace std;

int main()
{
    int N, index;
    cin >> N;
    cin >> index;
    int arr[1000]{};
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (index == i)
        {
            cout << arr[i];
            break;
        }
    }
    return 0;
}
