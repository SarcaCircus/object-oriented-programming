#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
	std::pair<double, double>& getLocation(std::pair<double, double> location) {
		return _location;
	}
private:
	
	std::pair<double, double> _location;
	
};
class Car : public Vehicle {
public:
	Car(string make, string model, long VIN)
		:_make(make), _model(model), _VIN(VIN) {}
	
	void SendToLocation(std::pair<double, double> location) {
		_location= location;

	}
	void Status() {
		cout << "Car: Location " << getLocation << "Make - " << _make << ", Model - " << _model << ", VIN - " << _VIN << endl;
	}
private: string _make;
		 string _model;
		 long _VIN;
		 std::pair<double, double> _location;

};
class Boat : public Vehicle{
public:
	Boat(string name, double cargo)
		:_name(name), _cargo(cargo) {}
	void Status() {
		cout << "Boat:  Location " <<getLocation << "Name - " << _name  << ", Cargo - " << _cargo << endl;
	}
	void SendToLocation(std::pair<double, double> location) {
		_location=location;

	}
private: string _name;
		 double _cargo;
		 std::pair<double, double> _location;
};
class Airplane : public Vehicle{
public:
   Airplane(string manu, long serial)
		:_manu(manu), _serial(serial) {}
	void Status() {
		cout << "Airplane:  Location " << getLocation <<" Manufacturer - " << _manu << ", Serial - " << _serial << endl;
	}
	void SendToLocation(std::pair<double, double> location) {
		_location=location;

	}
private: string _manu;
		 long _serial;
		 std::pair<double, double> _location;
};

			int main() {
				Car car{ "Tesla", "S", 12345L };
				Boat boat{ "Mayflower", 7.5 };
				Airplane plane{ "Boeing", 98765L };
				// (should print) Car: Make - Tesla, Model - S, VIN - 12345
				car.SendToLocation(pair<double, double>(1.0, 3.5));
				car.Status();
				// (should print) Boat: Name - Mayflower, Cargo - 7.5
				boat.SendToLocation(pair<double, double>(1.1, 3.4));
				boat.Status();
				// (should print) Airplane: Manufacturer - Boeing, Serial - 98765
				plane.SendToLocation(pair<double, double>(0.0, -3.5));
				plane.Status();
			}