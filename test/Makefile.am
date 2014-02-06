top=../
#gtest_dir=${top}../gtest/gtest-1.6.0/

SUBDIRS=

AM_CXXFLAGS=-Wall -std=c++11 -I${top}/src/ 
TESTS = test

check_PROGRAMS = test
test_LDFLAGS=-L${top}src   
test_LDADD= -lmetasim 
test_SOURCES = myentity.cpp \
	TestEntityOrder.cpp \
	TestTick.cpp \
	TestEntitySameName.cpp \
	TestParseUtil.cpp

# test_main.cpp \
# 	myentity.cpp \
# 	TestUtility.cpp \
# 	TestEntitySameName.cpp \
# 	TestParseUtil.cpp \
# 	TestTick.cpp \
# 	TestEntityOrder.cpp
