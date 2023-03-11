#include "lab2 taskA.h"

int taskA(std::vector<int> vector)
{
	std::sort(vector.begin(), vector.end());
	auto iter = std::unique(vector.begin(), vector.end());
	vector.erase(iter, vector.end());
	return vector.size();
}

int main()
{
	int N;
	std::cin >> N;
	std::vector<int> vector(N);
	for (int i = 0; i < vector.size(); i++)
		std::cin >> vector[i];
	std::cout << taskA(vector);
	return 0;
}

