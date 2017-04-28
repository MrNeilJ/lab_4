//
// Created by Neil on 4/28/2017.
//

#ifndef LAB_4_INSTRUCTOR_HPP
#define LAB_4_INSTRUCTOR_HPP


#include "Student.hpp"

class Instructor : public People {
private:
	double rating;

public:
	// Constructor
	Instructor();
	Instructor(std::string, int, double);

	// Setter
	void setRating(double);

	// Getter
	double getRating();


};



#endif //LAB_4_INSTRUCTOR_HPP
