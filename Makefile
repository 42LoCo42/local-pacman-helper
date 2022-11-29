CFLAGS  := -Wall -Wextra -O2 -fPIC -shared
DB = /var/lib/pacman

main.so: main.c
	$(CC) $(CFLAGS) $< -o $@
