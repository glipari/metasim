top=../..

noinst_PROGRAMS = markov

markov_CPPFLAGS=-Wall -std=c++0x -I${top}/src/
markov_LDFLAGS = -L${top}/src
markov_LDADD = -lmetasim

markov_SOURCES = markov.cpp

CLEANFILES = log.txt
