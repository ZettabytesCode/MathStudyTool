build : main.cpp Textbook.cpp Textbook.h
	g++ -Wall -pedantic -O0 -std=c++11 -o main main.cpp Textbook.cpp

clean:
	rm main
