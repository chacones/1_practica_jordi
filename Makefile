#   make        - makes the executable
#   make TARGET - makes the given target
#   make clean  - removes all files generated by make.

parking: Coche.o Parking.o main.o
	g++ -o parking main.o Parking.o Coche.o

main.o: main.cpp
	g++ -c main.cpp

Parking.o: Parking.cpp
	g++ -c Parking.cpp

Coche.o: Coche.cpp
	g++ -c Coche.cpp

clean:
	rm red_ferroviaria *~ *.o
