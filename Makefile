# Makefile
# Yannick Reiss
NAME		=	HeapSort
CC		=	gcc
CFLAGS	=	-Wall -g -I include
LDFLAGS	=	-Wall -g
INCLUDE	=	heap.h
OBJECTS	=	heap.o main.o

# compile program listed in $(NAME)
$(NAME): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $(NAME) $(OBJECTS)

# compile sources into objects
%.o: %.c $(INCLUDE)
		$(CC) $(CFLAGS) -c -o $@ $<

# report missing requirements
%.c:
	echo ERROR: MISSING $@

# Build and execute program
run: $(NAME)
	./$(NAME); make clean

# check for errors
check: $(NAME)
	make; make clean

# clean up objects and executable
clean:
	rm $(NAME) *.o

.PHONY: run
.PHONY: check
.PHONY: clean
