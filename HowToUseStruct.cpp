#include <string>
#include <iostream>
#include <vector>


struct Employee {
	std::string name;
	int id;
	int age;
	int mark[3];
};

Employee neutralfunction() {
	Employee temp{"hei", 69, 69};
	return temp;
}
Employee add_values(std::string name, int id, int age) {
	Employee temp = { name, id, age };
	return temp;
}



struct Company {
	Employee CEO;//Employee is a struct withn the company struct
	
	int numberOfEmployees;
};

void printInformation(const Employee& c){
	std::cout << "ID: " << c.id << "\n";
	std::cout << "Name: " << c.name << "\n";
	std::cout << "Age: " << c.age << "\n";
	for (int i = 0; i < 3; i++) {
		std::cout << "Test " << i + 1 << ":" << c.mark[i] << " \n";
	}
}

//function in struct
struct funInStruct {
	std::string name;
	std::vector<int> courses;
	int sizeOfVector() {
		return courses.size();
	}
};


Employee readEmployee() {
	int i;

	Employee tempEmp;
	std::cout << "Name: ?";
	std::getline (std::cin, tempEmp.name);
	std::cout << "ID?: ";
	std::cin >> tempEmp.id;
	for (i = 0; i < 3; i++) {
		std::cout << "Test" << i + 1 << "?: ";
		std::cin >> tempEmp.mark[i];
		return tempEmp;
	}
}



int main() {

	Employee arne = add_values("arne", 1, 2);
	std::cout << arne.id;

	//Company myCompany;
	Employee Fredrik;//declare a variabel of type Employee
	Employee joe{"joe", 3, 32};
	Fredrik.age = 20;// assign a value to member age within struct Fredrik
	//printInformation(joe);

	Company myCompany{ { "derf", 42, 60000.0 }, 5 };
	//std::cout << myCompany.CEO.age;
}
