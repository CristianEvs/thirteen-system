CC = g++ -std=c++17 -Wall -Werror -Wextra

FILES = Dubait_parser.cpp

TARGET = Dubait_parser

$(TARGET):
	$(CC) -c *.cpp
	ar rcs $(TARGET) *.o
	ranlib $(TARGET)
	rm -rf *.o

run:
	$(CC) $(FILES) -o $(TARGET)
	./$(TARGET)

format:
	clang-format -i style=Google *.cpp *.h

clean:
	rm -rm *.gcna *.gcdo $(TARGET) *.o