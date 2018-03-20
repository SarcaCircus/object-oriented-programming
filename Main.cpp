#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	Car(string make, string model, long VIN)
		:_make(make), _model(model), _VIN(VIN) {}
	void Status() {
		cout << "Car: Make - " << _make << ", Model - " << _model << ", VIN - " << _VIN <<endl;
	}
private: string _make;
		 string _model;
		 long _VIN;
};
class Boat {
public:
	Boat(string name, double cargo)
		:_name(name), _cargo(cargo) {}
	void Status() {
		cout << "Boat: Name - " << _name  << ", Cargo - " << _cargo << endl;
	}
private: string _name;
		 double _cargo;
};
class Airplane {
public:
   Airplane(string manu, long serial)
		:_manu(manu), _serial(serial) {}
	void Status() {
		cout << "Airplane: Manufacturer - " << _manu << ", Serial - " << _serial << endl;
	}
private: string _manu;
		 long _serial;
};

			int main() {
				Car car{ "Tesla", "S", 12345L };
				Boat boat{ "Mayflower", 7.5 };
				Airplane plane{ "Boeing", 98765L };
				// (should print) Car: Make - Tesla, Model - S, VIN - 12345
				car.Status();
				// (should print) Boat: Name - Mayflower, Cargo - 7.5
				boat.Status();
				// (should print) Airplane: Manufacturer - Boeing, Serial - 98765
				plane.Status();
			}