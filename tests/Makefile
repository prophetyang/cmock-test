TEST_MAIN = test_main
OBJS = main.o mock_librandom.o tests.o

CMOCK_CFLAGS = $(shell cmock-config --cflags)
CMOCK_LDFLAGS = $(shell cmock-config --libs)

CFLAGS = -Wall -I../include -I. $(CMOCK_CFLAGS)
LDFLAGS = -L../ -lrandom -lgtest -lgmock $(CMOCK_LDFLAGS)

all: $(TEST_MAIN) test

$(TEST_MAIN): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $^ -o $@

clean:
	$(RM) *.o $(TEST_MAIN)

test:
	LD_LIBRARY_PATH=/usr/lib:.. ./$(TEST_MAIN)
