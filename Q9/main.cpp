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
    // for(int i = 0; i < v.size(); i++)
    // {
    //     if(v.at(i) > max)
    //     {
    //         max = v.at(i);
    //     }
    // }
    // Sorting the array
    bool flag = true;
    while(flag){
        flag = false;
        for (int i = 0; i < v.size(); i++)
        {
            int temp = 0;
            if (v[i] > v[i+1])
            {
                flag = true;
                temp = v[i + 1];
                v[i + 1] = v[i];
                v[i] = temp;
            }
        }
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
