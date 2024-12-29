#https://www.youtube.com/watch?v=yXFhWWTmUjc 
#from this source I learned some basic things about make so that I could use it. (the language spoken in the video is Greek)

#compiler
CC = gcc

#flags (Warnings and debugging)
CFLAGS = -Wall -g

#headers and main
SOURCES = $(wildcard include/*.c)
MAIN = main.c

#program name
TARGET = hangman

#default target
all: $(TARGET)

#install
$(TARGET): $(SOURCES) $(MAIN)
	$(CC) $(CFLAGS) -o $(TARGET) $(MAIN) $(SOURCES)

#uninstall
clean:
	rm hangman

#PHONY targets (just to be pedantic)
.PHONY: clean all


