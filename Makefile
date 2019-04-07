CC = tcc
CFLAGS = -Wall -Wextra -s

TARGET = pomodoro

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)
