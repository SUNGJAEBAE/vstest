#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <array>
#include <string>
#include <set>
#include <boost/asio.hpp>
using namespace std;
int main()
{
	vector<int> container;
	for (int i=0;i<10;i++)
	container.push_back(i);
	vector<int>::iterator itr=container.begin();
	while (itr != container.end())
	{
		cout << *itr << ' ';
		++itr;
	}
	return 0;

}