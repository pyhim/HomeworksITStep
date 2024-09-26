#include <iostream>

#include "Exercises/exercises.h"

using namespace std;

template<class T>
void print_collection(T collection) {
    cout << '{';
    for (const auto i : collection) {
        cout << i << ',';
    }
    cout << '}' << endl;
}

int main() {
    const vector vec1{2, 4, 21, 7, 123, -54, 21, 1};
    const vector vec2{-2, 2, 4, 5, 123, 7, 8, 1, 10};
    const array<int, 2> task3_result = min_of_integers(vec1);
    const list<int> task7_result= task_7(vec1, vec2);

    std::cout << sum_of_integers(vec1) << '\n'
    << avg_of_integers(vec1) << '\n'
    << task3_result[0] << '\n' << task3_result[1] << '\n'
    << most_common_of(vec1) << '\n'
    << max_odd(vec1) << '\n';

    task_6(vec2);
    print_collection(vec2);
    print_collection(task7_result);

    return 0;
}
