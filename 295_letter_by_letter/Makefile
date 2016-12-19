#
#
#
#


CC = gcc
CFLAGS = -std=c99 -Wall -g
BUILD_DIR = build
OUTPUT = letter_by_leter


.PHONY: debug clean rebuild


$(OUTPUT): build/main.o 
	$(CC) $(CFLAGS) -o $(OUTPUT) $(BUILD_DIR)/main.o 

build/main.o: main.c
	$(CC) -c $(CFLAGS) -o $(BUILD_DIR)/main.o main.c

debug: CFLAGS += -D DEBUG
debug: $(OUTPUT)

clean:
	rm -r -f $(BUILD_DIR)/*.o
	rm $(OUTPUT)
	rm *~

rebuild: clean build
