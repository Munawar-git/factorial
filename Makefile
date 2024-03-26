CC = gcc
CFLAGS = -Wall -Wextra -std=c99

TARGET = factorial
PREFIX = /usr/bin

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $@ $^

install: $(TARGET)
	install -m 755 $(TARGET) $(PREFIX)

uninstall:
	rm -f $(PREFIX)/$(TARGET)

clean:
	rm -f $(TARGET)

