CXX=g++
CXXFLAGS=-Wall -ggdb
RM=rm -f

morse : test.o
	$(CXX) $(CXXFLAGS) $^ -o $@

test.o : traducteur_français_morse.h traducteur_morse_français.h

%.o: %.cpp; $(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	$(RM) test.o morse
