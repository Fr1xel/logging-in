#include <iostream>

using namespace std;

int main() {
	struct {
		string name = "Ivan";
		string surname = "Rados";
		int yearsOld = 16;
		int grades[7] = { 5,5,5,5,5,5,5 };
		bool isAdmin = true;
	} Student1;

	cout << "Hello my name is " << Student1.name << " " << Student1.surname << endl
		<< "and I am " << Student1.yearsOld << " years old!" << endl;

	struct {
		string name;
		string surname;
		int yearsold;
		bool isAdmin = false;
		bool isApproved = false;
	}User;

	cout << "Enter your name:";
	cin >> User.name;
	cout << "Enter your surname:";
	cin >> User.surname;
	cout << "How old are you:";
	cin >> User.yearsold;

	if (User.yearsold < 18) {
		cout << "Sorry, you are too young to continue this course." << endl;
		return 0;
	}
	else {
		cout << "You are old enough to continue this course." << endl;
	}

	string approvedNames[10] = { "Ivan", "Mama", "Tata", "Sestra", "Kum", "Ivica", "Marica",
	"Apple", "John", "Harold" };

	for (int i = 0; i < 10; i++) {
		if (approvedNames[i] == User.name) {
			User.isApproved = true;
		}
	}

	if (User.isApproved) {
		cout << "You are approved and ready to procede to continue to learn to code at:";
	}
	else {
		cout << "Looks like your name is not on the list!" << endl
			<< "We are sorry but you cannot continue this course";
	}
	return 0;
}