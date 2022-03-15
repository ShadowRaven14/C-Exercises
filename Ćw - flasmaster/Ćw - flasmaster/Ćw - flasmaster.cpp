
#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
    int x = 1;
    string n;
    cin >> n;
    for (int i = 0; i < n.size(); i++)
    {
        
        if (n[i] == n[i + 1]) x++;
        else
        {
            cout << n[i];
            if (x == 2) cout << n[i];
            else if(x>2) cout << x;
            
            x = 1;
        }
            


    }
}
