#include <iostream>
using namespace std;
int main()
{
    int val;
    int min;
    int max;
    
    for (int i = 0; i < 3; ++i) {
        cin >> val;
        if (i==0) {
            min = val;
            max = val;
        }
        if (i == 1) {
            if (min <= val) {
                min = val;
            }
            if (max >= val) {
                max = val;
            }
        }
        if (i == 2) {
            if (min <= val) {
                min = val;
            }
            if (max >= val) {
                max = val;
            }
        }
    }
    cout << min << endl;




}