#include <iostream>
#include <string>
#include <list>
class Human {	
protected:
	std::string name;
	int age;
public:
	Human(std::string _name = "", int _age = 0): name(_name), age(_age) {};
	~Human() {};
	void setName(std::string _name) {
		name = _name;
	}
	void print() {
		std::cout << "Name: " << name << ", age: " << age << std::endl;
	}
};

class Student : public Human {
	std::string university;
	std::list<int> marks;
public:
	Student(std::string _name, int _age, std::string _university)
		: Human(_name, _age), university(_university) {	};
	~Student() {};
	void addMark(int _mark) {
		if(_mark > 0)
			this->marks.push_back(_mark);
	};
	float averageMark() {
		int marksSum = 0;
		for (int mark : marks)
			marksSum += mark;
		if (marks.size() == 0) {
			std::cout << "There are any marks" << std::endl;
			return 0;
		}
		return (float)marksSum / marks.size();
	}
};

int main() {
	Student student("Andriy", 21, "NUWEE");
	student.addMark(5);
	student.addMark(3);
	student.addMark(3);
	student.addMark(3);
	student.print();
	std::cout << "Student average mark: " << student.averageMark() << std::endl;
	student.setName("Boris");
	student.print();
	system("pause");
	return 0;
}
