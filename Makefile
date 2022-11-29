CFLAGS  := -Wall -Wextra -O2 -fPIC -shared

main.so: main.c
	$(CC) $(CFLAGS) $< -o $@
