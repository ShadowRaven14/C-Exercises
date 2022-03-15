
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World!\n";
    int n;
    bool x=true;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) x = false; 
    }
    if (x == true)
        cout << "TAK";
    else cout << "NIE";

    
}

