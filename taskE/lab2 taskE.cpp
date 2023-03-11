#include "lab2 taskE.h"

int taskE(std::string expression)
{
    std::stack<int> stack;
    for (int i = 0; i < expression.length(); i++)
    {
        char current = expression[i];
        if (current == ' ')
            continue;
        if (current >= '0' && current <= '9')
            stack.push(current - '0');
        else {
            int num1 = stack.top();
            stack.pop();
            int num2 = stack.top();
            stack.pop();

            if (current == '+') {
                stack.push(num2 + num1);
            }
            else if (current == '-') {
                stack.push(num2 - num1);
            }
            else if (current == '*') {
                stack.push(num2 * num1);
            }
            else if (current == '/') {
                stack.push(num2 / num1);
            }
        }
    }
    return stack.top();
}

int main()
{
	std::string expression;
	getline(std::cin, expression);
    std::cout << taskE(expression);
	return 0;
}