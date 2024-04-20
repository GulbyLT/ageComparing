#include <iostream>
#include <string>
#include <string_view>

std::string inputName()
{
	std::cout << "Enter a name: \n";
	std::string name;
	std::getline(std::cin >> std::ws, name);

	return name;
}

int inputAge()
{
	int age;
	std::cin >> age;
	return age;
}


int main()
{
	std::string name1 = inputName();
	std::cout << "\nEnter " << name1 << "'s age: ";
	int age1 = inputAge();

	std::string name2 = inputName();
	std::cout << "\nEnter " << name2 << "'s age: ";
	int age2 = inputAge();


	if (age1 > age2) {
		std::cout << "\n" << name1 << " is older with " << age1 << " years\n";
	}
	else {
		std::cout << "\n" << name2 << " is older with " << age2 << " years\n";
	}

	return 0;
}