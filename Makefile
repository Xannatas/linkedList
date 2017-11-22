main:	LL.o main.cpp
	g++ main.cpp LL.o

LL.o:	LL.cpp LL.h
	g++ -c LL.cpp

clean:
	rm -f *.o a.out
