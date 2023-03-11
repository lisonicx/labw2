#include "lab2 taskC.h"

void taskC(std::deque<int> deque1, std::deque<int> deque2)
{
    int count = 0;
    while (!deque1.empty() && !deque2.empty())
    {
        int num1 = deque1.front();
        deque1.pop_front();
        int num2 = deque2.front();
        deque2.pop_front();

        if (num1 == 0 && num2 == 9)
        {
            deque1.push_back(num1);
            deque1.push_back(num2);
        }

        else if (num1 == 9 && num2 == 0)
        {
            deque2.push_back(num1);
            deque2.push_back(num2);
        }

        else if (num1 > num2)
        {
            deque1.push_back(num1);
            deque1.push_back(num2);
        }

        else if (num1 < num2)
        {
            deque2.push_back(num1);
            deque2.push_back(num2);
        }
        count++;
    }

    if (count == 1000000) 
        std::cout << "botva";
    else if (deque1.empty())
        std::cout << "second " << count;
    else
        std::cout << "first " << count;
}

int main()
{
    std::deque<int> deque1;
    std::deque<int> deque2;

    for (int i = 1; i <= 5; i++) {
        int num;
        std::cin >> num;
        deque1.push_back(num);
    }

    for (int i = 1; i <= 5; i++) {
        int num;
        std::cin >> num;
        deque2.push_back(num);
    }
    taskC(deque1, deque2);
	return 0;
}