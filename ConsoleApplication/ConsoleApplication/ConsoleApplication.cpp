#include <stdio.h>
#include <string>
using namespace std;

class Car 
{
protected:
	string company, model;
public:
	Car() = default;
	Car(string company, string model) 
	{
		this->company = company;
		this->model = model;

		printf("Company: %s\n", this->company.c_str());
		printf("Model: %s\n\n", this->model.c_str());
	}
};

class PassengerCar : virtual public Car 
{
public:
	PassengerCar() = default;
	PassengerCar(string company, string model) : Car(company, model) {}
};

class Bus : virtual public Car
{
public:
	Bus() = default;
	Bus(string company, string model) : Car(company, model) {}
};

class Minivan : public PassengerCar, public Bus
{
public:
	Minivan(string company, string model) : Car(company, model) {}
};
int main()
{
	Car car = Car("BMW", "BMW M4 Coupe");
	PassengerCar passenger_car = PassengerCar("Suzuki", "Suzuki Ignis");
	Bus bus = Bus("MAN", "MAN model");
	Minivan minivan = Minivan("Toyota", "Toyota Alphard");
	return 0;
}

