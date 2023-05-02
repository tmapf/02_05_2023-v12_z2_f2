#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int i = 0, k = 0;
    while (i < a.size()) {
        if ((sqrt(8 * a[i] + 1) - 1) / 2 == round((sqrt(8 * a[i] + 1) - 1) / 2)) {//check for triangular numbers
            a.erase(a.begin() + i);
            k++;
        }
        else
            i++;
    }
    cout << "the list A consist of: ";
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";

    return 0;
}
