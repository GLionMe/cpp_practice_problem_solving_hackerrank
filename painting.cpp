#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int count = 1;
    while(t--)
    {
        int n;
        cin >> n;

        char colors[3] = {'U', 'U', 'U'};

        string p;
        cin >> p;

        int r = 0;
        for(int i = 0; i < p.size();++i) {
            if(colors[1] != 'U' && colors[2] != 'U' && colors[3] != 'U')
                break;
            
            if(p[i] == 'U')
                continue;
            
            if(p[i] == 'R' || p[i] == 'O' || p[i] == 'P' || p[i] == 'A') {
                if(colors[0] != 'R') {
                    r++;
                    colors[0] = 'R';
                }
            }

            if(p[i] == 'Y' || p[i] == 'O' || p[i] == 'G' || p[i] == 'A') {
                if(colors[1] != 'Y') {
                    r++;
                    colors[1] = 'Y';
                }
            }

            if(p[i] == 'B' || p[i] == 'G' || p[i] == 'P' || p[i] == 'A') {
                if(colors[2] != 'R') {
                    r++;
                    colors[2] = 'R';
                }
            }
        }

        cout << "Case #" << count++ <<": " << r << "\n";
    }
}