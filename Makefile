LIBRANDOM_SO = librandom.so
LIBRANDOM_OBJS = librandom.o

CFLAGS = -Wall -fPIC -Iinclude 
LDFLAGS = --shared

all: $(LIBRANDOM_SO)

$(LIBRANDOM_SO): $(LIBRANDOM_OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean: test_clean
	$(RM) *.o *.so

test:
	$(MAKE) -C tests

test_clean:
	$(MAKE) -C tests clean
