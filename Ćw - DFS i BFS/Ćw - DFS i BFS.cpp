#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int s;
int odw[1000005] = { 0 };
vector<int>G[1000005];


void dfs(int w)
{
    odw[w] = 1;
    for (int i = 0; i < G[w].size(); i++)
    {
        s = G[w][i];
        if (odw[s] == 0) dfs(s);
    }
}

int main()
{

    vector <int> tab;
    tab.push_back(1);
    tab.push_back(2);
    tab.push_back(3);
    tab.push_back(0);

    for (int i = 0; i < tab.size(); i++)
    {
        cout << tab[i]<<endl;
    }


    vector <int> dwu[3];
    for (int i = 0; i < dwu.size(); i++)
    {
        dwu[i].push_back(i);
    }

    for (int i = 0; i < tab.size(); i++)
    {
        cout << dwu[i][1] << endl;
    }

    std::ios_base::sync_with_stdio(false);
    int n, k, a, b;
    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }


    for (int i = 0; i < k; i++)
    {
        //cout << G[1][i]<<endl;
    }

    dfs(0);
    int wynik = 0;
    for (int i = 0;i < n; i++)
    {
        wynik = wynik + odw[i];
    }

    cout << wynik;
    return 0;
}