#include <iostream>
using namespace std;

int main()
{
    int N, flag = 0;
    cin >> N;
    int arr[1000]{};
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int revArr[1000]{};

    // Reversing Array
    for (int i = N; i > 0; i--)
    {
        revArr[N - i] = arr[i - 1];
    }

    // Checking whether the reversed array and the original array is the same
    for (int i = 0; i < N; i++)
    {
        if (revArr[i] == arr[i])
        {
            flag++;
        }
    }
    if (flag == N)
    {
        cout << "PERFECT SQUARE";
    }
    else
    {
        cout << "NOT PERFECT";
    }
    // cout << endl;
    // for (int i = 0; i < N; i++)
    // {
    //     cout << revArr[i] << " ";
    // }
}