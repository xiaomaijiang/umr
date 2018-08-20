#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([FULL-PACKAGE-NAME], [VERSION], [BUG-REPORT-ADDRESS])
AM_INIT_AUTOMAKE
AC_CONFIG_SRCDIR([src/core/main.c])
# AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CC
AC_LIBTOOL_WIN32_DLL
AC_PROG_LIBTOOL
# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.
# APR
AC_ARG_VAR([APRCONFIG], [apr-1-config tool with path])

if test -z "$APRCONFIG"; then
	AC_PATH_PROG(apr_config, [apr-1-config])
else
	apr_config=$APRCONFIG
fi

if test "x$apr_config" = "x"; then
    AC_MSG_ERROR([apr library not found])
fi

APR_LIBS=`$apr_config --link-ld --libs`
LIBS="$LIBS $APR_LIBS "

APR_CFLAGS=`$apr_config --cppflags`
CFLAGS="$CFLAGS $APR_CFLAGS  "

APR_LDFLAGS=`$apr_config --ldflags`
LDFLAGS="$LDFLAGS $APR_LDFLAGS "

APR_INCLUDES=`$apr_config --includes`
INCLUDES="$INCLUDES $APR_INCLUDES -I../../include"


# Checks for library functions.

AC_SUBST(INCLUDES)
AC_SUBST(APR_LIBS)
AC_SUBST(APR_CFLAGS)

AC_CONFIG_FILES([Makefile
                 src/Makefile
                 src/commons/Makefile
                 src/core/Makefile])
AC_OUTPUT
