#include <stdio.h>

class universityAttendee 
{
protected:
    const char* name;
    int age;
    bool male;
    float weight;

public:
	static const int studentPassType = 1;
	static const int teacherPassType = 2;
	static const int scientistPassType = 3;
	static const int technicianPassType = 4;

    universityAttendee(const char* name, int age, bool male, float weight)
    {
        this->name = name;
        this->age = age;
        this->male = male;
        this->weight = weight;
    }

	const char* getName()
	{
		return name;
	}
	void setName(const char* name)
	{
		this->name = name;
	}

	int getAge()
	{
		return age;
	}
	void setAge(int age)
	{
		this->age = age;
	}

	const char* isMale()
	{
		if (male == true)
		{
			return "true";
		}
		else {
			return "false";
		}
	}
	void setGender(bool male)
	{
		this->male = male;
	}

	float getWeight()
	{
		return weight;
	}
	void setWeight(float weight)
	{
		this->weight = weight;
	}
};

class Student : public universityAttendee
{
public:
	const int passType = 1;
	Student(const char* name, int age, bool male, float weight) : universityAttendee(name, age, male, weight){}
};

class Teacher : public universityAttendee
{
public: 
	const int passType = 2;
	Teacher(const char* name, int age, bool male, float weight) : universityAttendee(name, age, male, weight) {}
};

class Scientist : public universityAttendee
{
public:
	const int passType = 3;
	Scientist(const char* name, int age, bool male, float weight) : universityAttendee(name, age, male, weight) {}
};

class Technician : public universityAttendee
{
public:
	const int passType = 4;
	Technician(const char* name, int age, bool male, float weight) : universityAttendee(name, age, male, weight) {}
};

void checkPoint(int passType)
{
	switch (passType) 
	{
	case universityAttendee::studentPassType:
		printf("Welcome, student. You have been granted access to the student sector\n");
		break;
	case universityAttendee::teacherPassType:
		printf("Welcome, teacher. You have been granted access to the teacher sector\n");
		break;
	case universityAttendee::scientistPassType:
		printf("Welcome, scientist. You have been granted access to the scientist sector\n");
		break;
	case universityAttendee::technicianPassType:
		printf("Welcome, technician. You have been granted access to the technician sector\n");
		break;
	default:
		printf("Undetermined pass type. Access denied\n");
	}
}

int main()
{	
	const char* name = "John";
	Student student = Student(name, 20, true, 75);
	checkPoint(student.passType);

	name = "Ann";
	Teacher teacher = Teacher(name, 35, false, 65);
	checkPoint(teacher.passType);

	name = "Alfred";
	Scientist scientist = Scientist(name, 60, true, 95);
	checkPoint(scientist.passType);

	name = "Bob";
	Technician technician = Technician(name, 45, true, 85);
	checkPoint(technician.passType);
}

