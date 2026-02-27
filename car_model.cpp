#include<iostream>
using namespace std;

/*
this project made by yazan abushreefih
*/

class Car {

public:
	string Car_Name;
	string Car_Model;
	int Car_Year;
	double price;
	int speed;

	void ShowInfo() {
		cout << "********** Car Information *********** \n\n";
		cout << "Car name : " << Car_Name << endl;
		cout << "model : " << Car_Model << endl;
		cout << "Year of manufacture (MY) : " << Car_Year << endl;
		cout << "price : " << price << " $ " << endl;
		cout << "Maximum speed : " << speed << " KM/H" << endl;

	}
};

int main() {

	Car Ex_Car1;
	//Car Ex_Car2;
	//Car Ex_Car3;

	Ex_Car1.Car_Name = "Toyota";
	Ex_Car1.Car_Model = "Camry";
	Ex_Car1.Car_Year = 2026;
	Ex_Car1.price = 38.603;
	Ex_Car1.speed = 195;

	Ex_Car1.ShowInfo();
}
