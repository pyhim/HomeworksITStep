//
// Created by dgalytskyi on 9/25/24.
//

#include "exercises.h"

#include <unordered_map>

int sum_of_integers(const vector<int>& numbers) {
    int sum = 0;

    for (const int number : numbers) {
        if (number == 0) continue;

        for (int i = 1; i < 10000000; i *= 10) {
            if (const int temp = number / i; temp != 0) {
                sum += temp;
                continue;
            }

            break;
        }
    }

    return sum;
}

int avg_of_integers(const vector<int>& numbers) {
    int sum = 0;

    for (const int number : numbers) {
        if (number > 0) sum += number;
    }

    return sum / static_cast<int>(numbers.size());
}

array<int, 2> min_of_integers(vector<int> numbers) {
    int min = numbers[0], index = 0, i = 0;

    for (const int number : numbers) {
        if (number < min) {
            min = number;
            index = i;
        }
        i++;
    }

    return {min, index};
}

int most_common_of(const vector<int>& numbers) {
    unordered_map<int, int> counters;

    for (const int number : numbers) {
        auto node_iterator = counters.find(number);

        if (node_iterator != counters.end()) {
            node_iterator->second++;
            continue;
        }

        counters.emplace(number, 1);
    }

    pair<int, int> result;

    for (const auto node : counters) {
        if (node.second > result.second) {
            result = node;
        }
    }

    return result.first;
}

int max_odd(vector<int> numbers) {
    int max = numbers[0];

    for (const int number : numbers) {
        if (number % 2 != 0 && number % 3 == 0 && number > max) {
            max = number;
        }
    }

    return max;
}

void task_6(vector<int> numbers) {
    int max_even = numbers[0], max_even_index = 0;
    int i = 0;

    for (const int number : numbers) {
        if (number % 2 == 0 && number > max_even) {
            max_even = number;
            max_even_index = i;
        }
        i++;
    }

    int min_odd = numbers[0], min_odd_index = 0;
    i = 0;

    for (const int number : numbers) {
        if (number % 2 != 0 && number < min_odd) {
            min_odd = number;
            min_odd_index = i;
        }
        i++;
    }

    if (max_even == numbers[0] && max_even % 2 != 0 || min_odd == numbers[0] && min_odd % 2 == 0) {
        for (int& number : numbers) {
            number = 0;
        }
        return;
    }

    const int temp = numbers[max_even_index];
    numbers[max_even_index] = numbers[min_odd_index];
    numbers[min_odd_index] = temp;
}

list<int> task_7(const vector<int>& l1, const vector<int>& l2) {
    list<int> result;

    for (auto iter1 = l1.cbegin(); iter1 < l1.cend(); ++iter1) {
        for (const int iter2 : l2) {
            if (*iter1 == iter2) {
                result.emplace_back(*iter1);
                ++iter1;
            }
        }

        result.emplace_back(*iter1);
    }

    return result;
}
