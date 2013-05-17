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

1. INTRODUCTION

MetaSim is a library for discrete event simulation written in C++. It
has been developed as an internal project at Scuola Superiore
Sant'Anna as part of many research project, mainly thanks to the work
of many PhD students.

======================================================================

2. RELEASE NOTES

This software has been tested under many operating systems, including
Linux, FreeBSD, Mac OS X and Windows (Cygwin). The software is known
to work under most Unix-like and Win32 systems. The compiler used is
gcc 4.6, and MinGW under Windows.

======================================================================

3. COMPILING

The software can be compiled on any platform with gcc 4.6 or greater
versions. Under Windows, it can be built both with and without the
Cygwin environment, which can be freely downloaded at
(http://www.cygwin.com). Required packages under Cygwin are gcc and
make. When not using Cygwin, the MinGW software cna be used.

----------------------------------------------------------------------

3.1. Extracting the file

Untar the tarball file in your preferred directory:

  tar xjvf metasim-1.0.0.tar.bz2 (tar and bzip2)

You should obtain a metasim directory.

----------------------------------------------------------------------

3.2. Compiling under Unix-like systems (including Mac OS X)

The steps to build and install the software are the usual ones:

  cd metasim
  ./configure
  make
  make check (optional)
  make install (optional, as root)

make check builds and runs the tests. Simply typing make will not
build the test directories. 

The tests have been written using the Google Test library: 

  http://code.google.com/p/googletest/

For compiling the tests, you need to download the google test library
and unpack it in a directory at the same level as metasim. For
example, you can have this directory structure:

/myprogs-+
         |
         +---- gtest ---- gtest-1.6.0 --+- include ---- gtest ---- ... 
         |                              |
         |                              +- src ...
         |                              |
         |                             ...
         |
         +---- metasim --+-- src ...
                         |
                         +-- test ...


Once you have unpacked the gtest library in the right place, just type 

  make check

to compile and run the MetaSim tests. 

======================================================================

4. INSTALLING

You must be root to install the software (this requirement doesn't
exist under Cygwin). Basically, installation consists in copying the
library files into

  /usr/local/lib

and the header files into

  /usr/local/include/metasim

To do this, you must be superuser on your machine (you do not need
administrative privileges in Cygwin), and type

  make install

If you want the software to be installed in another location, then you
can specify a different path by passing the
--prefix=/path/to/install/directory argument to the configure script.

Note that you must either install MetaSim to a standard location or
specify the flags for including and linking MetaSim when building
RTLib.

======================================================================

5. RUNNING THE EXAMPLES

Every directory under one of the "examples" directories contains a
different example. Go inside the directory and run the executable
file. For example, to run the eth example, go inside the directory

  examples/eth

and type

  ./eth

======================================================================

6. BUGS AND CONTRIBUTIONS

For bug reports, feature requests and other issues you may encounter,
please refer to the appropriate pages on the github site:

  http://github.com/glipari/metasim

======================================================================

Giuseppe Lipari
g.lipari@sssup.it
