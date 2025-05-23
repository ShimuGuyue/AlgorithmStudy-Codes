//  $$$$$$\  $$\   $$\     $$\  $$$$$$\  $$$$$$\  $$$$$$\  
// $$  __$$\ $$ |  \$$\   $$  |$$  __$$\ \_$$  _|$$  __$$\ 
// $$ /  $$ |$$ |   \$$\ $$  / $$ /  \__|  $$ |  $$ /  $$ |
// $$$$$$$$ |$$ |    \$$$$  /  \$$$$$$\    $$ |  $$$$$$$$ |
// $$  __$$ |$$ |     \$$  /    \____$$\   $$ |  $$  __$$ |
// $$ |  $$ |$$ |      $$ |    $$\   $$ |  $$ |  $$ |  $$ |
// $$ |  $$ |$$$$$$$$\ $$ |    \$$$$$$  |$$$$$$\ $$ |  $$ |
// \__|  \__|\________|\__|     \______/ \______|\__|  \__|
// 你是否赞同纯美女神爱莉希雅的美貌盖世无双？【愛門】!
#include <iostream>
#include <iomanip>
#include <cstdint>
#include <climits>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::setw;
using std::pair;
using std::string;
using std::vector;
using std::deque;
using std::queue;
using std::stack;
using std::priority_queue;
using std::set;
using std::map;
using std::sort;
using std::max_element;
using std::min_element;

void Solve(void);

int main(void)
{
	#ifdef Shimu_Guyue
		freopen("test.in" , "r", stdin );
		freopen("test.out", "w", stdout);
	#else
	#endif

    std::ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1;
	// cin >> t;
	while (t--)
	{
		Solve();
		// cout << endl << "-------------------------" << endl;
	}
	return 0;
}

void Solve(void)
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int count1 = 0;
	int count0 = 0;
	for (char c : s)
	{
		if (c == '1')
			++count1;
		else
			++count0;
	}
	if (count1 + 1 < count0 - 1)
	{
		cout << 0 << endl;
		return;
	}
	int count_0 = 0;
	int count_1 = 0;
	int flag = 0;
	int ans;
	for (char c : s)
	{
		if (c == '1')
			++count_1;
		else
			++count_0;
		if (count_0 > count_1)
		{
			if (flag == 0)
			{
				flag = 1;
				ans = count_0;
				++count_1;
				--count_0;
			}
			else
			{
				cout << 0 << endl;
				return;
			}
		}
	}
	if (flag == 0)	
		cout << n << endl;
	else
		cout << ans << endl;
}