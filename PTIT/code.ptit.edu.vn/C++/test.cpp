#include <bits/stdc++.h> // Nen dung cho do phai khai bao nhieu :((
#include <iostream>
#include <stdbool.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

using namespace std;

bool check(string s)
{
    int n = s.length();
    if (n < 6)
        return false;
    bool check1 = 0, check2 = 0, check3 = 0, check4 = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '@' || s[i] == '&' || s[i] == '%')
            check1 = 1;
        else if (isupper(s[i]))
            check2 = 1;
        else if (islower(s[i]))
            check3 = 1;
        else if (s[i] == ' ')
            check4 = 0;
    }
    if (check1 && check2 && check3 && check4)
        return true;
    return false;
}
int main()
{
    cout << "nhap mat khau cua ban: ";
    string pass = "";
    char c = ' ';
    while (c != '\r') // or 13. cai nay t cung ko hieu tai sao cai '\n' lai ko duoc :v
    {
        c = getch();
        if (c == '\b' && pass.length() >= 1)
        {
            cout << "\b \b";
            pass.pop_back(); // xoa phan tu o cuoi
        }
        else
        {
            pass += c; // toan tu noi string
            cout << "*";
        }
    }
    cout << "\nMat khau cua ban: " << pass;

    if (check(pass))
        cout << "\nMat khau hop le!";
    else
        cout << "\nMat khau khong hop le!";
    return 0;
}