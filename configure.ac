dnl Process this file with autoconf to produce a configure script

AC_INIT(MetaSim, 1.1, g.lipari@sssup.it)
AM_INIT_AUTOMAKE([src], 1.1)
AM_CONFIG_HEADER(config.h)
AC_CONFIG_MACRO_DIR([m4])
AC_PROG_CXX
AC_LANG(C++)
AC_PROG_LIBTOOL

AC_CHECK_PROGS(RANLIB, ranlib)
AC_OUTPUT(Makefile src/Makefile test/Makefile
		   examples/Makefile
		   examples/eth/Makefile
		   examples/markov/Makefile
		   examples/queue/Makefile,
		   [date > stamp-h] )

dnl End the configure script.
