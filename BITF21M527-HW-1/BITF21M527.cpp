#include <iostream>
#include <string.h>

using namespace std;

class Employee
{
private:
	string name;
	int id;
	string department;
	string position;

public:

	//CONSTRUCTORS
	//first constructor
	Employee(string x_name, int x_id, string x_department, string x_position)
	{
		name = x_name;
		id = x_id;
		department = x_department;
		position = x_position;
	}

	//second constructor
	Employee(string y_name, int y_id)
	{
		name = y_name;
		id = y_id;
		department = " ";
		position = " ";
	}

	//default constructor
	Employee()
	{
		name = " ";
		id = 0;
		department = " ";
		position = " ";
	}

	//copy constructor
	Employee(const Employee& person1)
	{
		name = person1.name;
		id = person1.id;
		department = person1.department;
		position = person1.position;
	}

	//destructor
	~Employee()
	{
		cout << "Destructor Executed....." << endl;
	}


	//PROPERTY METHODS
	//setters
	void setName(string n)
	{
		name = n;
	}

	void setId(int i)
	{
		id = i ;
	}

	void setDepartment(string d)
	{
		department = d;
	}

	void setPosition(string p)
	{
		position = p;
	}

	//getters
	string getName()
	{
		return name;
	}

	int getId()
	{
		return id;
	}

	string getDepartment()
	{
		return department;
	}

	string getPosition()
	{
		return position;
	}


	//MEMBER FUNCTIONS

	//setting information
	void setInfo(string a, int b,string c,string d)
	{
		name = a;
		id = b;
		department = c;
		position = d;
	}

	//getting information
	void getInfo()
	{
		string name;
		int id;
		string department;
		string position;

		cout << "Enter the name of employee : ";
		cin >> name;
		cout << "Enter the id of employee : ";
		cin >> id;
		cout << "Enter the department of employee : ";
		cin >> department;
		cout << "Enter the position of employee : ";
		cin >> position;
		cout << endl << endl;
		setInfo(name, id, department, position);
	}

	//placing information
	void putInfo()
	{
		cout << getName() << "\t" << "\t" << getId() << "\t" << "\t" << getDepartment() << "\t" << "\t" << getPosition() << endl;
	}
};





int main()
{
	Employee person1("Mahnoor", 1001, "Finance", "HR"), person2(person1), person3("zainab",2), person4, person5;

	//Taking Info
	//person-1
	cout << "Enter the information of employee 1: " << endl;
	person1.getInfo();

	//person-2
	cout << "Enter the information of employee 2: " << endl;
	person2.getInfo();

	//person-3
	cout << "Enter the information of employee 3: " << endl;
	person3.getInfo();

	//person-4
	cout << "Enter the information of employee 4: " << endl;
	person4.getInfo();

	//person-5
	cout << "Enter the information of employee 5: " << endl;
	person5.getInfo();

	//FINAL PRINTING
	cout << "NAME" << "\t\t" << "ID" << "\t\t" << "DEPARTMENT" << "\t" << "POSITION" << endl;
	person1.putInfo();
	person2.putInfo();
	person3.putInfo();
	person4.putInfo();
	person5.putInfo();
}