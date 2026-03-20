CC = gcc
CFLAGS = -Wall -Werror
EXECUTABLE = student_records

${EXECUTABLE}: display.o grades.o update.o main.C
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.C
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm *.o ${EXECUTABLE}