CXXCOMPILER ?= g++
CXXFLAGS ?= -std=c++11

sandbox: main.cpp
	${CXXCOMPILER} ${CXXFLAGS} -o $@ -lbz2 $<
