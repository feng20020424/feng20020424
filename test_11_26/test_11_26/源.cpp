#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <map>
#include<string>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);

    map<char, int> m1;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (isalpha(s1[i]))
            m1[s1[i]]++;
    }

    for (map<char, int>::iterator it = m1.begin(); it != m1.end(); it++) {
        cout << it->first << ":" << it->second << endl;
    }
}


#include <iostream>
#include<set>
using namespace std;

int main() {
    int a, b;
    int c;
    cin >> a >> b;
    set<int>s1;
    for (int i = 0; i < b; i++)
    {

        cin >> c;
        s1.insert(c);

    }
    int d;
    for (int i = 0; i < b; i++)
    {
        cin >> c;
        set<int>::iterator i1 = s1.begin();
        for (; i1 != s1.end(); i1++)
        {

            if (*i1 > c)
            {
                cout << *i1 << endl;;
                break;
            }
        }
        if (i1 == s1.end())
        {
            cout << -1 << endl;
        }


    }

}