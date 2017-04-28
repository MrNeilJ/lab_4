output: main.o University.o Building.o Instructor.o Student.o People.o menuMaker.o inputCheck.o
	g++ main.o University.o Building.o Instructor.o Student.o People.o menuMaker.o inputCheck.o -std=c++11 -o output

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

University.o: University.cpp University.hpp
	g++ -std=c++11 -c University.cpp

Building.o: Building.cpp Building.hpp
	g++ -std=c++11 -c Building.cpp

Instructor.o: Instructor.cpp Instructor.hpp
	g++ -std=c++11 -c Instructor.cpp

Student.o: Student.cpp Student.hpp
	g++ -std=c++11 -c Student.cpp

People.o: People.cpp People.hpp
	g++ -std=c++11 -c People.cpp

menuMaker.o: menuMaker.cpp menuMaker.hpp
	g++ -std=c++11 -c menuMaker.cpp

inputCheck.o: inputCheck.cpp inputCheck.hpp
	g++ -std=c++11 -c inputCheck.cpp

clean:
	rm *.o output