top=../..
AM_CXXFLAGS=-Wall -std=c++0x -I${top}/src/

AM_LDFLAGS = -L${top}/src/

LDADD = -lmetasim

noinst_PROGRAMS = eth

eth_SOURCES = example.cpp \
	link.cpp \
	link.hpp \
	message.cpp \
	message.hpp \
	netinterface.cpp \
	netinterface.hpp \
	node.cpp \
	node.hpp

CLEANFILES = coll.txt log.txt
