#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n ;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        int a[n] ;
        for(int i = 0 ; i < n ; i++)
            cin >> a[i] ;
        int c = 0;
        for(int i = 0 ; i < n-1 ; i++)
        {
            if(a[i] > a[i+1])
            {
            	c++;
			}
    	}
    	if(c==1)
    	{
    		if(a[n-1]<=a[0])
    			c=0;
		}
        if(c == 0)
            cout << "YES" << endl ;
        else
            cout << "NO" <<  endl ;
    }
    return 0 ;
}
