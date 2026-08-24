#include <iostream>
using namespace std;
int main()
{
    int t, a, b, l, s, i = 1, f = 0, ans,p=0;
    cin >> t;
    while (t--)
    {
        cin >> l >> a >> b;
        
        while (s != a||!p)
        {
            s = (a + i * b) % l;
            i++;
            
            if (!f || ans < s)
            {
 
                ans = s;
                f++;
            p++;
            }
        
        }
        cout << ans << endl;
        f=0;
        p=0;
        i=1;
        
    }
    return 0;
}