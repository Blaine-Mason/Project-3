#ifndef PAYROLL_H
#define PAYROLL_H

#include <string>
#include <iostream>

class PayRoll{
	public:
		PayRoll(); //default constructor
		PayRoll(std::string, double, double); //constructor with name and payrate and
							      //hours as parameters
		void setHours(double); //set the number of hours
		void setRate(double); //set the payrate
		void setName(std::string); //set the name
		double getPay() const; //returns pay
		double getRate() const; //returns payRate
		double getHours() const; //returns Hours
		std::string getName() const; //returns name
		void displayInfo(); //displays name and total pay
		friend std::ostream& operator<<(std::ostream &out, const PayRoll&);
		friend bool operator==(const PayRoll& lhs, const PayRoll& rhs);
	private:
		std::string name; //name
		double payRate; //rate of pay
		double hours; //hours worked
};

#endif
