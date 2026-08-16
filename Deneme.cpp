#include <iostream>
#include <list>
using namespace std;

void turn_into_list(int number, list<int>& number_list) {

	for (int i = 1; i <= number; i++) {

		number_list.push_back(i);

	}
}

void josephus_theorem(list <int>& number_list) {

	auto it = number_list.begin();

	int step = 2;

	while (number_list.size() > 1) {

		for (int i = 1; i < step; i++) {

			it++;

			if (it == number_list.end()) {

				it = number_list.begin();

			}
		}



		it = number_list.erase(it);

		if (it == number_list.end()) {

			it = number_list.begin();

		}
	}

		for (int survivor : number_list) {

			cout << "survivor is: " << survivor << endl;

		}



	}
	int main() {

		int number;

		list <int> number_list;

		cout << "enter a number:";

		cin >> number;

		turn_into_list(number, number_list);

		josephus_theorem(number_list);

		return 0;

	}