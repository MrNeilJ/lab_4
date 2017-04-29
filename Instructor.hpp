/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 4.30.2017
 *
 * Description: This is the Instructor header class for the
 * University application.In here we are able to build instructor
 * objects filled with their name, age, and teacher rating.
 * From here we can return these values, or even set them to do
 * work. We also have methods that allow us to print the
 * instructors in an easy to read format
**************************************************************/

#ifndef LAB_4_INSTRUCTOR_HPP
#define LAB_4_INSTRUCTOR_HPP


#include "Student.hpp"

class Instructor : public People {
private:
	double rating;

public:
	// Constructor
	Instructor();
	Instructor(std::string, int);

	// Setter
	void setRating(double);

	// Getter
	double getRating();

	// Member Function
	void print();
	void do_work(int);

};



#endif //LAB_4_INSTRUCTOR_HPP
