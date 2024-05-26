#include<iostream>
#include<vector>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand((int)time(0));

    int N = 0;
    while (N < 1)
    {
        cout << "N = ";
        cin >> N;
    }

    vector<int> vec;
    cout << "Vector with random:" << endl;
    int minVal, sumPosOdd = 0, flg = 0;
    for (int i = 0; i < N; i++)
    {
        vec.push_back(rand() % 21 - 10);
        cout << vec[i] << " ";
        if (i == 0 || minVal > vec[i])
            minVal = vec[i];
        if (vec[i] > 0 && vec[i] % 2)
        {
            flg = 1;
            sumPosOdd += vec[i];
        }
    }
    cout << endl;
    cout << "Min : " << minVal << endl;
    if (flg)
        cout << "Sum : " << sumPosOdd << endl;
    else
        cout << "No sum !!!!!" << endl;
    cout << "Positive elements of vector:" << endl;
    for (int i = 0; i < N; i++)
        if (vec[i] > 0)
            cout << vec[i] << " ";
    cout << endl;

    system("pause");
    return 0;
}