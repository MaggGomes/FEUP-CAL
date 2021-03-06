#ifndef BUS_H
#define BUS_H

#include <string>
#include <vector>

#include "School.h"

using namespace std;

class Student;

/**
 * @Class that represents a bus
 */
class Bus {
	int ID;
	static int lastID;
	School * school;
	int buildYear;
	string registration;
	int capacity;
	vector<Student *> students;
public:
	/**
	 * @brief Bus's default constructor
	 */
	Bus();

	/**
	 * @brief Bus's constructor
	 *
	 * @param buildYear Bus's build year
	 * @param registration
	 * @param capacity
	 */
	Bus(int buildYear, string registration, int capacity);

	/**
	 * @brief Sets a new build year
	 *
	 * @param year new build year to be settled
	 */
	void setBuildYear(int year);

	/**
	 * @brief Returns build year of the bus
	 *
	 * @return build year
	 */
	int getBuildYear() const;

	/**
	 * @brief Sets a new registration
	 *
	 * @param new registration to be settled
	 */
	void setRegistration(string registration);

	/**
	 * @brief Returns the registration of the bus
	 *
	 * @return registration
	 */
	string getRegistration() const;

	/**
	 * @brief Sets a new capacity
	 *
	 * @param new capacity to be settled
	 */
	void setCapacity(int capacity);

	/**
	 * @brief Returns the capacity of the bus
	 *
	 * @return capacity
	 */
	int getCapacity() const;

	/**
	 * @brief Associates a new school to the bus
	 *
	 * @param new school to be settled
	 */
	void setSchool(School * school);

	/**
	 * @brief Returns the capacity of the bus
	 *
	 * @return capacity
	 */
	School *  getSchool() const;

	/**
	 * @brief Adds a new student to the bus
	 *
	 * @param new student to be added
	 */
	void addStudent(Student * student);

	/**
	 * @brief Returns the all the students transported by the bus
	 *
	 * @return the students
	 */
	vector<Student *> getStudents() const;

	/**
	 * @brief Sets a new ID to the bus
	 *
	 * @param new student to be added
	 */
	void setID(int ID);

	/**
	 * @brief Returns the ID of the bus
	 *
	 * @return the students
	 */
	int getID() const;

	/**
	 * @brief Returns a vector with the node ID's of the students
	 *
	 * @return the node ID's of the students
	 */
	vector<int> getStops() const;

	/**
	 * @brief Overload of the operator == for the class Bus
	 *
	 * @returns true if the registration of 2 the bus are equal
	 */
	bool operator==(const Bus bus) const;

	/**
	 * @brief Overload of the operator << for the class Bus
	 */
	friend ostream& operator<<(ostream& os, const Bus& bus);
};

#endif // BUS_H
