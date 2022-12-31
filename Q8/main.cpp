#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, max = 0;
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    // Sorting the array
    bool flag = true;
    while (flag)
    {
        flag = false;
        for (int i = 0; i < v.size(); i++)
        {
            int temp = 0;
            if (v[i] > v[i + 1])
            {
                flag = true;
                temp = v[i + 1];
                v[i + 1] = v[i];
                v[i] = temp;
            }
        }
    }
    int sizeRequired = v.size() - 2;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    for (int i = 0; i < sizeRequired; i++)
    {
        cout << v[i] << " ";
    }
}