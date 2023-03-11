#include "lab2 taskI.h"

void taskI(std::vector<int> vec)
{
    std::stack<int> stack;
    std::queue<int> queue;
    int count = 1;
    for (int i = 0; i < vec.size(); i++)
    {
        if (!stack.empty() && vec[i] > stack.top()) 
        {
            std::cout << 0 << std::endl;
            exit(0);
        }
        queue.push(1);
        stack.push(vec[i]);
        while (!stack.empty() && stack.top() == count)
        {
            queue.push(2);
            stack.pop();
            count++;
        }
    }

    int type = queue.front();
    queue.pop();
    int number = 1;
    while (!queue.empty())
    {
        if (queue.front() == type) 
            number++;
        else 
        {
            std::cout << type << " " << number << std::endl;
            type = queue.front();
            number = 1;
        }
        queue.pop();
    }
    std::cout << type << " " << number << std::endl;

}

int main() {
    int N;
    std::cin >> N;
    std::vector<int> vec(N);
    for (int i = 0; i < vec.size(); i++)
        std::cin >> vec[i];
    taskI(vec); 
    return 0;
}
