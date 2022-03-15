#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class osoba
{
public:
    string imie;
    int ilosc;

public:
    osoba()
    {
        cout << "Konstruktor 1" << endl;
        imie = "";
        ilosc = 1;
    }

    osoba(string a)
    {
        cout << "Konstruktor 2" << endl;
        imie = a;
        ilosc = 1;
    }

    osoba(string a, int b)
    {
        cout << "Konstruktor 3" << endl;
        imie = a;
        ilosc = b;
    }

    void setImie(string a)
    {
        imie = a;
    }

    void setIlosc(int a)
    {
        ilosc = a;
    }

    string getImie()
    {
        return imie;
    }

    int getIlosc()
    {
        return ilosc;
    }



};


int main()
{
    osoba os1;
    // << os1;
    cout << os1.getIlosc() << endl;
    os1.setImie("maciek");
    os1.setIlosc(134);

    osoba os2("Krzysztof", 14);
    cout << os2.getIlosc() << endl;


    //Deklaracja wczytywanie z pliku
    ifstream fcin;
    fcin.open("OCR.txt");

    vector <string> nazwa;
    vector <osoba> output;

    //Wczytywanie z pliku
    while (!fcin.eof()) //Warunek dopóki
    {
        string a = " ";
        cout << "Wczytywanie" << " ";
        fcin >> a;
        cout << a << endl;
        nazwa.push_back(a);
    }

    //Powiększanie liter i dodawanie do tablicy
    for (int i = 2;i < nazwa.size();i=i+3)
    {
            for (int j = 0;j < nazwa[i].size();j++)
            {
                nazwa[i][j]= toupper(nazwa[i][j]);
            }

            osoba os(nazwa[i]);
            cout << os.getImie() << endl;

            int p = 0;
            for (int z = 0;z < output.size(); z++)
            {
                if (output[z].imie == os.imie) { output[z].ilosc++; p++; }
            }
            if(p==0) output.push_back(os);
                    
    }
    
    cout << endl<<endl;
    for (int i = 2; i < nazwa.size(); i = i + 3)
    {
        cout << nazwa[i] << " ";
    }

    cout << endl << endl;

    cout << output.size() << endl;
    for (int i = 0;i < output.size();i++)
    {
        cout << output[i].imie << " " << output[i].ilosc << endl;
    }
    

    return 0;
}

