#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int q = n / 2 + 1;
    int i = 1;
    while(i<=q)
    {
        int w = q - i;
        while(w>0)
        {
            cout << ' ';
            w--;
        }
        int e = 1;
        while(e<=i)
        {
            cout << '*';
            e++;
        }
        int r = 1;
        while (r <= i - 1)
        {
            cout << '*';
            r++;
        }
            i++;
        cout << endl;
    }
  }
