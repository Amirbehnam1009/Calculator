#include <stack>
#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <fstream>
#include <vector>
#include <map>

using namespace std;


int priority(char c)
{
	if (c == '*' || c == '/')
		return 2;
	else
		return 1;
}
long long mode(long long m) {
	if (m < 0)
	{
		m += 1000000007;
	}
	else if (m == 0)return 0;
	return m % (1000000007);
}
long long calculator(vector<string> postfix) {
	long long a, b;
	stack<long long> stk;
	string::iterator it;

	for (int i = 0; i < postfix.size(); i++)
	{
		if (postfix[i] == "+" || postfix[i] == "-" || postfix[i] == "*") {
			a = stk.top();
			stk.pop();
			b = stk.top();
			stk.pop();
			if (postfix[i] == "+")
				stk.push(mode(a + b));
			if (postfix[i] == "-")
				stk.push(mode(b - a));
			if (postfix[i] == "*")
				stk.push(mode(a * b));
		}
		else {
			stk.push(stoll(postfix[i]));
		}
	}
	return stk.top();
}
vector<string> infixtopostfix(list<char> commands) {
	commands.insert(commands.begin(), '(');
	commands.insert(commands.end(), ')');

	stack<string> st;
	vector<string> postfix;
	list<char>::iterator x;
	bool neg = false;
	for (list<char>::iterator it = commands.begin(); it != commands.end(); ++it)
	{
		if (*it == '(')
		{
			st.push("(");
			x = next(it, 1);
			if (*x == '-')
			{
				neg = true;
				it++;
			}
		}
		else if (*it == ')')
		{
			while (st.size() != 0 && st.top() != "(")
			{
				postfix.push_back(st.top());
				st.pop();
			}
			if (st.top() == "(")
			{
				st.pop();
			}

		}
		else if (*it <= '9' && *it >= '0')
		{
			string h = "";
			if (neg)
			{
				h += "-";
				neg = false;
			}
			h += *it;
			it++;
			while (*it <= '9' && *it >= '0')
			{
				h += *it;
				it++;
			}
			postfix.push_back(h);
			it--;
		}
		else {
			while (st.size() != 0 && st.top() != "(" && priority(st.top()[0]) >= priority(*it))
			{
				postfix.push_back(st.top());
				st.pop();
			}
			st.push(string(1, *it));
		}
	}
	return postfix;
}


list<char> init() {
	string temp;
	list<char> commands;
	cin >> temp;
	for (size_t i = 0; i < temp.size(); i++)
	{
		commands.insert(commands.end(), temp[i]);
	}
	return commands;
}
int main() {

	int m = 0;
	cin >> m;
	list<char> commands = init();
	list<char>::iterator currentCursor = commands.begin();
	map<list<char>, int> hashTable;
	map<list<char>, int>::iterator hashTable_it;
	char c = ' ';
	int a;
	string res;
	for (int i = 0; i < m; i++)
	{
		cin >> c;
		if (c == '>')
		{
			if (currentCursor != commands.end())
			{
				currentCursor++;
			}
		}
		else if (c == '<')
		{
			if (currentCursor != commands.begin())
			{
				currentCursor--;
			}
		}
		else if (c == '+')
		{
			cin >> c;
			commands.insert(currentCursor, c);
		}
		else if (c == '?')
		{

			for (list<char>::iterator it = commands.begin(); it != commands.end(); ++it)
			{
				if (it == currentCursor)
				{
					res += '|';

				}
				res += *it;

			}
			if (currentCursor == commands.end())
				res += '|';
			res += '\n';

		}
		else if (c == '!')
		{

			hashTable_it = hashTable.find(commands);
			if (hashTable_it != hashTable.end())
			{
				res += to_string(hashTable_it->second) + '\n';
			}
			else
			{
				vector<string> h = infixtopostfix(commands);
				long long r = calculator(h);
				hashTable.insert(std::pair<list<char>, int>(commands, r));
				res += to_string(r) + '\n';
			}


		}
		else if (c == '-')
		{
			currentCursor--;
			currentCursor = commands.erase(currentCursor);
		}
	}
	cout << res.substr(0, res.size() - 1);

}


/*
11
(2+3)
>
>
?
!
+ 5
?
!
-
?
!
*/