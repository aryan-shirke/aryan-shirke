#include <iostream>

using namespace std;

int main()
{
    float i;

    cout << "Enter the number : ";
    cin >>i;

    cout << endl;

    for (int x = 1 ; x < 11 ; x++)
        cout << i << " x " << x << " = " << (i*x) << endl ;
    return 0;
}
