#include <iostream>
using namespace std;

int main()
{
    int N, sum = 0;
    cin >> N;
    int arr[1000]{};
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }
    cout << sum;
    return 0;
}