fraction: main.o fraction.o
	g++ main.o fraction.o -o fraction

main.o: main.cpp
	g++ -c main.cpp

fraction.o: fraction.cpp
	g++ -c fraction.cpp

clean:
	rm *.o fraction
