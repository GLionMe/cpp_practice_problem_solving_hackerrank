#include<iostream>
using namespace std;

int checkSmallestDif(string f, char c) {
    int y = 13;

    for(int i = 0;i < f.size();++i) {
        int diff = c - f[i];

        if(diff < 0)
            diff = -(diff);
        
        if(diff > 13)
            diff = 26 - diff;
        
        if(diff < y) {
            y = diff;
        }
    }

    return y;
}

int main()
{
    int t;
    cin >> t;

    int count = 1;
    while(t > 0) {
        string s, f;
        int y = 0;
        cin >> s >> f;

        for(int i = 0;i < s.size();++i) {
            char c = s[i];
            y += checkSmallestDif(f,c);
        }

        cout << "Case #" << count << ": " << y << "\n";
        t--;
        count++;
    }
}