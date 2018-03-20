#include <iostream>
#include <string>
#include<vector>
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
	
	/*void SendToLocation(std::pair<double, double> location) {
		_location= location;

	}
	void Status() {
		cout << "Car: Location " << getLocation << "Make - " << _make << ", Model - " << _model << ", VIN - " << _VIN << endl;
	}*/
private: string _make;
		 string _model;
		 long _VIN;
		 std::pair<double, double> _location;

};
class Boat : public Vehicle{
public:
	Boat(string name, double cargo)
		:_name(name), _cargo(cargo) {}
	/*void Status() {
		cout << "Boat:  Location " <<getLocation << "Name - " << _name  << ", Cargo - " << _cargo << endl;
	}
	void SendToLocation(std::pair<double, double> location) {
		_location=location;

	}*/
private: string _name;
		 double _cargo;
		 std::pair<double, double> _location;
};
class Airplane : public Vehicle{
public:
   Airplane(string manu, long serial)
		:_manu(manu), _serial(serial) {}
	/*void Status() {
		cout << "Airplane:  Location " << getLocation <<" Manufacturer - " << _manu << ", Serial - " << _serial << endl;
	}
	void SendToLocation(std::pair<double, double> location) {
		_location=location;

	}*/
private: string _manu;
		 long _serial;
		 std::pair<double, double> _location;
};

int main() {
	vector<Vehicle> fleet;
	fleet.push_back(Car{ "Tesla", "S", 12345L });
	fleet.push_back(Boat{ "Mayflower", 7.5 });
	fleet.push_back(Airplane{ "Boeing", 98765L });
	for (auto vehicle : fleet) {
		vehicle.Status();//the problem is the line vehicle.Status(); because Staus is unique function in each vehicle type and not a member of the actual Vehicle class
	}
}
