lab2: ftest.o fraction.o
	g++ -o lab2 ftest.o fraction.o

ftest.o: ftest.cc fraction.h
	g++ -c --std=c++11 ftest.cc

fraction.o: fraction.cc fraction.h
	g++ -c --std=c++11 fraction.cc

