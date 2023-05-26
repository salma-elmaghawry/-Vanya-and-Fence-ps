#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int l;
    cin >> l;
    int arr[n];
    int counter = 0;
    for (int i = 0;i < n;i++)
    {

        cin >> arr[i];
        if (arr[i] > l)
        {
            counter = 2;
        }
        else

            counter++;

    }


    cout << counter << endl;




}