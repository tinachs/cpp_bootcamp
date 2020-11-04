
CXX = g++

all: Shape.so  libShape.so
	$(CXX) Main.cpp -L. -lShape -o all
	
Shape.so: Shape.cpp Shape.h
	$(CXX) --shared -fPIC Shape.cpp -o libShape.so
	





