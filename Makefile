CXX=g++
CXXFLAGS = -Wall
EXE = DemoMathLib

all: demo.o MathLib.o
	$(CXX) $(CXXFLAGS) -o $(EXE) demo.o MathLib.o

MathLib.o: MathLib.cpp MathLib.h
	$(CXX) $(CXXFLAGS) -c MathLib.cpp

demo.o: demo.cpp MathLib.h
	$(CXX) $(CXXFLAGS) -c demo.cpp

clean:
	-rm MathLib.o
	-rm demo.o
	-rm DemoMathLib
