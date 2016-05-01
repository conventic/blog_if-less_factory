
OBJDIR=.build
CC=g++
CXXFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp CommandFactory.cpp CommandA.cpp CommandB.cpp 
OBJECTS=$(SOURCES:.cpp=.o)
	EXECUTABLE=iflessfactory

all: $(SOURCES) $(EXECUTABLE)
	    
$(EXECUTABLE): $(OBJECTS) 
	    $(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	    $(CC) $(CXXFLAGS) $< -o $@

clean:
		rm *.o && rm iflessfactory
