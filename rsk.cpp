#include <bits/stdc++.h>
using namespace std;
int w, k;
int main()
{
    cin >> w >> k;

    if (((w == 1) && (k == 1)) || ((w == 8) && (k == 8)))
    {
        cout << "2";
        return 0;
    }
    if (((w == 1) && (k == 3)) || ((w == 1) && (k == 5)) || ((w == 3) && (k == 1)) || ((w == 5) && (k == 1)) || ((w == 4) && (k == 8)) || ((w == 6) && (k == 8)) || ((w == 8) && (k == 6)) || ((w == 8) && (k == 4)))
    {
        cout << "4";
        return 0;
    }
    if (((w == 7) && (k == 1)) || ((w == 2) && (k == 8)) || ((w == 1) && (k == 7)) || ((w == 8) && (k == 2)))
    {
        cout << "3";
        return 0;
    }
     if (((w == 2) && (k == 2)) || ((w == 7) && (k == 7)))
    {
        cout << "4";
        return 0;
    }
     if (((w == 2) && (k == 4)) || ((w == 2) && (k == 6)) || ((w == 3) && (k == 7)) || ((w == 5) && (k == 7)) || ((w == 7) && (k == 5)) || ((w == 7) && (k == 3)) || ((w == 6) && (k == 2)) || ((w == 4) && (k == 2)))
    {
        cout << "6";
        return 0;
    }
    if (((w == 3) && (k == 3)) || ((w == 4) && (k == 4)) || ((w == 5) && (k == 5)) || ((w == 6) && (k == 6)) || ((w == 3) && (k == 5)) || ((w == 4) && (k == 6)) || ((w == 5) && (k == 3)) || ((w == 6) && (k == 4)))
    {
        cout << "8";
        return 0;
    }
    //------------------------------------------------------------------
    if (((w == 1) && (k == 2)) || ((w == 8) && (k == 7)) || ((w == 2) && (k == 1)) || ((w == 7) && (k == 8)))
    {
        cout << "3";
        return 0;
    }
    if (((w == 1) && (k == 8)) || ((w == 8) && (k == 1)))
    {
        cout << "2";
        return 0;
    }
    if (((w == 1) && (k == 4)) || ((w == 1) && (k == 6)) || ((w == 8) && (k == 3)) || ((w == 8) && (k == 5)) || ((w == 4) && (k == 1)) || ((w == 5) && (k == 8)) || ((w == 6) && (k == 1)) || ((w == 3) && (k == 8)) || ((w == 2) && (k == 7)) || ((w == 7) && (k == 2)))
    {
        cout << "4";
        return 0;
    }
     if (((w == 2) && (k == 3)) || ((w == 7) && (k == 6)) || ((w == 2) && (k == 5)) || ((w == 7) && (k == 4)) || ((w == 3) && (k == 2)) || ((w == 6) && (k == 7)) || ((w == 5) && (k == 2)) || ((w == 4) && (k == 7)))
    {
        cout << "6";
        return 0;
    }
    if (((w == 6) && (k == 3)) || ((w == 3) && (k == 6)) || ((w == 6) && (k == 5)) || ((w == 3) && (k == 4)) || ((w == 4) && (k == 3)) || ((w == 5) && (k == 4)) || ((w == 4) && (k == 5)) || ((w == 5) && (k == 6)))
    {
        cout << "8";
        return 0;
    }
}
