main: main.cpp InMemoryDB.cpp
	g++ -o main main.cpp InMemoryDB.cpp

clean:
	rm -f main
