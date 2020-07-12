#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
	set<int>st;
	int n, m,x,counter=0;
	cin >> n >> m;
	while (n != 0 && m != 0)
	{
		counter = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
				st.insert(x);
		}
		for (int i = 0; i < m; i++)
		{
			cin >> x;
			if (st.count(x))
				counter++;
		}

		cout << counter << endl;
		st.clear();
		cin >> n >> m;
	}
	return 0;
}