#include "payroll.h"

/*
 *Assigns name and payRate default values
 */
PayRoll::PayRoll()
{
	name = "no name";
	payRate = 0.0;
	hours = 0;
}
/*
 *Assigns name and payRate their associated parameters
 */
PayRoll::PayRoll(std::string str, double rate, double hrs)
{
	name = str;
	payRate = rate;
	hours = hrs;
}
/*
 * Set the hours for this employee
 */
void PayRoll::setHours(double hrs)
{
	hours = hrs;
}
/*
 * Set the payRate for this employee
 */
void PayRoll::setRate(double r8)
{
	payRate = r8;
}
/*
 * Set the name for this employee
 */
void PayRoll::setName(std::string n)
{
	name = n;
}
/*
 * Display info about the employee
 */
void PayRoll::displayInfo()
{
	std::cout << std::endl;
	std::cout << "Employee: " << name << std::endl;
	std::cout << "PayRate: " << getRate() << std::endl;
	std::cout << "Total Pay: " << getPay() << "$" << std::endl;
}
std::ostream& operator<<(std::ostream &out, const PayRoll& p){
	out << std::endl;
	out << "Employee: " << p.getName() << std::endl;
	out << "PayRate: " << p.getRate() << std::endl;
	out << "Total Pay: " << p.getPay() << "$" << std::endl;;
	return out;
}
/*
 * Calculate and return the total pay for
 * this employee
 */
double PayRoll::getPay() const
{
	return payRate * hours;
}
/*
 * Gets the payRate of the employee
 */
double PayRoll::getRate() const
{
	return payRate;
}
/*
 * Gets the hours worked of the employee
 */
double PayRoll::getHours() const
{
	return hours;
}
/*
 * Gets the Name of the employee
 */
std::string PayRoll::getName() const
{
	return name;
}
bool operator==(const PayRoll& lhs, const PayRoll& rhs){
	return (lhs.getName() == rhs.getName()) && (lhs.getHours() == rhs.getHours()) && (lhs.getRate() == rhs.getRate());
}
