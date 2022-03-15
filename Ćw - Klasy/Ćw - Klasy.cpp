#include <iostream>
using namespace std;

class prostokat
{
public:
    int a,b;

    //konstruktor
    prostokat(int x, int y)
    {
        cout << "Konstruktor 1" << endl;
        a = x;
        b = y;        
    }
    
    //Konstruktor
    prostokat()
    {
        cout << "Kontrusktor 2" << endl;
        a = 1;
        b = 1;
    }
    
    int pole()
    {
        cout << a << " " << b << endl;
        return a*b;
    }

    int ob()
    {
        cout << a << " " << b << endl;
        return 2 * a + 2 * b;
    }

};

class kolo
{
public:
    int r;
    kolo(int x)
    {
        r = x;
    }
    kolo()
    {
        r = 1;
    }
    int pole()
    {
        return 3 * r * r;
        r = 5;
    }
    int ob()
    {
        return 2 * 3 * r;
    }
};

int main()
{
    int q;
    cin >> q;
    kolo zmienna1(q);
    kolo zmienna2;
    cout << zmienna1.pole();















    /*
    int c, d;
    cin >> c >> d;

    prostokat zmienna1(c, d);
    prostokat zmienna2;
    prostokat zmienna3(10, 10);
    //cout << zmienna.a << endl;
    //cout << zmienna.b << endl;

    cout<<zmienna1.pole()<<endl;
    cout<<zmienna2.pole()<<endl;
    cout << zmienna3.pole() << endl;
    */
}