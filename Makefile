

all: math.exe

math.o: Areas.h Stats.h math.cpp
	g++ -std=c++98 -Wall -c math.cpp -o math.o

Areas.o: Areas.h Areas.cpp
	g++ -std=c++98 -Wall -c Areas.cpp -o Areas.o

Stats.o: Stats.h Stats.cpp
	g++ -std=c++98 -Wall -c Stats.cpp -o Stats.o

math.exe: Areas.o math.o Stats.o
	g++ -std=c++98 Areas.o Stats.o math.o -o math.exe

clean:
	rm -f *.o *.exe
