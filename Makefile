

dispenser: main.o dispenser.o register.o
	g++ main.o dispenser.o register.o -o vendingmachine

main.o: main.cpp register.h dispenser.h
	g++ -c main.cpp

dispenser.o: dispenser.cpp dispenser.h register.h
	g++ -c dispenser.cpp