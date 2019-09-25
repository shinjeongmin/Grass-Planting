#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> vec;
	vector<int> result;
	int total{ 0 };
	for (int i = 0; i < 9; i++)
	{
		int temp;
		cin >> temp;
		vec.push_back(temp);
		total += temp;
	}

	vector<int> select;
	int k = 2;
	for (int i = 0; i < k; i++)
	{
		select.push_back(1);
	}
	for (int i = 0; i < vec.size() - k; i++)
	{
		select.push_back(0);
	}
	sort(select.begin(), select.end());
	do {
		int sum;
		sum = 0;
		for (int i = 0; i < vec.size(); i++)
		{
			if (select[i] == 1)
			{
				sum += vec[i];
			}
		}

		if (total - 100 == sum)
		{
			for (int i = 0; i < vec.size(); i++)
			{
				if (select[i] == 0)
					result.push_back(vec[i]);
			}
			sort(result.begin(), result.end());
			for (int i = 0; i < result.size(); i++)
			{
				cout << result[i] << "\n";
			}
			return 0;
		}
	} while (next_permutation(select.begin(), select.end()));
}