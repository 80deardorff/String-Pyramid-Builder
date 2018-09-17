#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string message {};
	cout << "Enter a sentence and press Enter: ";
	getline(cin, message);
	cout << endl << endl;
	
	size_t spaces {message.length() - 1};
	size_t index {message.length()};
	string reversed_message {message};
	reverse(reversed_message.begin(), reversed_message.end());
	size_t counter {1};

	if (message.length() != 0) {
		for (size_t i{0}; i < message.length(); ++i) {
			for (size_t j {spaces}; j >= 1; --j) {
				cout << " ";
			}
			for (size_t j {0}; j < counter; ++j) {
				cout << message.at(j);
			}
			for (size_t j {1}; j < counter; ++j, ++index) {
				cout << reversed_message.at(index);
			}
			for (size_t j {spaces}; j >= 1; --j) {
				cout << " ";
			}
			index = message.length() - counter;
			++counter;
			--spaces;
			cout << endl;
		}
	} else {
		cout << "\nNo message was submitted....Goodbye." << endl;
	}
	cout << endl;
	return 0;
}