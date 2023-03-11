#include "lab2 taskD.h"

bool taskD(std::string str)
{
    std::stack<char> stack;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '[' || str[i] == '(' || str[i] == '{') {
            stack.push(str[i]);
            continue;
        }
        if (stack.empty())
            return false;
        if ((str[i] == ']' && stack.top() != '[') || (str[i] == ')' && stack.top() != '(') || (str[i] == '}' && stack.top() != '{'))
            return false;
        stack.pop();
    }
    return stack.empty();
}

int main()
{
	std::string str;
	getline(std::cin, str);
    if (taskD(str))
        std::cout << "yes";
    else
        std::cout << "no";
	return 0;
}