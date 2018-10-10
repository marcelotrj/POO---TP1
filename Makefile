all: livro.o eletronico.o impresso.o audioBook.o main.cpp
	g++ -o main main.cpp livro.o eletronico.o impresso.o audioBook.o -Wall
livro.o: livro.cpp
	g++ -o livro.o -c livro.cpp
eletronico.o: eletronico.cpp
	g++ -o eletronico.o -c eletronico.cpp
impresso.o: impresso.cpp
	g++ -o impresso.o -c impresso.cpp
audioBook.o: audioBook.cpp
	g++ -o audioBook.o -c audioBook.cpp
clean:
	-rm *.o main
run:
	./main
