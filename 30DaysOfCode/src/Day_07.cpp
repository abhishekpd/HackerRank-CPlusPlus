#include <iostream>
#include <limits>
#include <algorithm>
#include "../header/Day_07.h"

std::vector<std::string> Day_7::split_string(std::string input_string) {
    std::string::iterator new_end = std::unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    std::vector<std::string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != std::string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, std::min(pos, input_string.length()) - i + 1));

    return splits;
}


void Day_7::Arrays()
{
	int n;
	std::cin >> n;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::string arr_temp_temp;
	std::getline(std::cin, arr_temp_temp);

	std::vector<std::string> arr_temp = Day_7::split_string(arr_temp_temp);

	std::vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		int arr_item = stoi(arr_temp[i]);
		arr[i] = arr_item;
	}

	for(int j=arr.size();j>0;j--)
		std::cout << arr.at(j-1) << " ";
}
