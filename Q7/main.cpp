#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> vec;
    int a, max = 0, min = 99999, pos = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        vec.push_back(a);
    }
    // cout << "Starting Vector size: " << vec.size() << endl;
    while (vec.size() > 1)
    {
        for (int i = 0; i < vec.size(); i++)
        {
            if (vec.at(i) > max)
            {
                max = vec.at(i);
                // cout << "Max:" << max << " " << endl;
                pos = i;
                // cout << "Pos:" << pos << " " << endl;
            }
        }
        // cout << "End of For Pos :" << pos << " " << endl;
        vec.erase(vec.begin() + pos);
        pos = 0;
        // cout << "After 1 iteration size: " << vec.size() << endl;
        for (int i = 0; i < vec.size(); i++)
        {
            if (vec.at(i) < min)
            {
                min = vec.at(i);
                // cout << "Max:" << max << " " << endl;
                pos = i;
                // cout << "Pos:" << pos << " " << endl;
            }
        }
        vec.erase(vec.begin() + pos);
        pos = 0;
        max = 0, min = 99999;
    }
    cout << vec[0];
    return 0;
}