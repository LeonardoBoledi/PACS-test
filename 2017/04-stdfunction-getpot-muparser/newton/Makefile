CXXFLAGS += -Wall -std=c++11 -I /vagrant/pacs/Examples/src/Utilities
OBJS = main.o
EXE = main

.PHONY: all clean distclean run

all: $(EXE)

$(EXE): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

main.o: newton.h

run: all
	./$(EXE)

clean:
	$(RM) *.o

distclean: clean
	$(RM) $(EXE)
