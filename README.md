MetaSim: Event-based simulator
=================================

Authors: Giuseppe Lipari, Gerardo Lamastra, Antonino Casile, 
         Luigi Palopoli, Cesare Bartolini

Contributors: Luca Abeni, Marco Caccamo, Fabio Rossi, Claudio Scordino

Copyright: Retis Laboratory, Scuola Superiore Sant'Anna
email:     g.lipari@sssup.it

This is open source software and is distributed under the terms of the Gnu
Public License (GPL). See COPYING for more details.

======================================================================

SUMMARY

1. INTRODUCTION
2. RELEASE NOTES
3. COMPILING
4. INSTALLING
5. RUNNING THE EXAMPLES
6. BUGS AND CONTRIBUTIONS

======================================================================

## 1. INTRODUCTION

MetaSim is a library for discrete event simulation written in C++. It
has been developed as an internal project at Scuola Superiore
Sant'Anna as part of many research project, mainly thanks to the work
of many PhD students.


## 2. RELEASE NOTES

This software has been tested under Linux with compiler 

    g++ (Ubuntu/Linaro 4.8.1-10ubuntu9) 4.8.1

Testing on other systems is currently under way, stay tuned.


## 3. COMPILING

The software can be compiled on any platform with gcc 4.8.1 or greater
versions. 

Under Windows, it can be built both with and without the Cygwin
environment, which can be freely downloaded at
(http://www.cygwin.com). Required packages under Cygwin are gcc and
make. When not using Cygwin, the MinGW software cna be used.

### 3.1. Extracting the file

Untar the tarball file in your preferred directory:

  tar xjvf metasim-xx.yy.tar.bz2 (tar and bzip2)

You should obtain a metasim directory.

### 3.2. Compiling under Unix-like systems (including Mac OS X)

The steps to build and install the software are the usual ones:

    cd metasim
    ./configure
    make
    make check 

Last step will launch the test, and it is optional. 

The tests have been written using the Catch library, which is a single
include file that you can find in the test directory.

https://github.com/philsquared/Catch


## 4. INSTALLING

Currently, installation is not supported. After compilation, all
header files and the library file are found in the src/
directory. Simply put the path of the src directory in the CPPFLAGS
and in the LDFLAGS when you want to use the library. 


## 5. RUNNING THE EXAMPLES

Every directory under one of the "examples" directories contains a
different example. Go inside the directory and run the executable
file. For example, to run the eth example, go inside the directory

  examples/eth

and type

  ./eth

## 6. BUGS AND CONTRIBUTIONS

For bug reports, feature requests and other issues you may encounter,
please refer to the appropriate pages on the github site:

  http://github.com/glipari/metasim


Giuseppe Lipari
g.lipari@sssup.it
