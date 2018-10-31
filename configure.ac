dnl Process this file with autoconf to produce a configure script
AC_INIT([osmo-gsm-manuals],
	m4_esyscmd([./git-version-gen .tarball-version]),
	[openbsc@lists.osmocom.org])

dnl *This* is the root dir, even if an install-sh exists in ../ or ../../
AC_CONFIG_AUX_DIR([.])

# FIXME: what's dist-bzip2 for?
AM_INIT_AUTOMAKE([dist-bzip2])
# AC_CONFIG_TESTDIR(tests)

# dnl kernel style compile messages
# m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES([yes])])

# dnl include release helper
# RELMAKE='-include osmo-release.mk'
# AC_SUBST([RELMAKE])

dnl checks for programs
# AC_PROG_MAKE_SET
# AC_PROG_CC
AC_PROG_INSTALL
LT_INIT

dnl check for pkg-config (explained in detail in libosmocore/configure.ac)
AC_PATH_PROG(PKG_CONFIG_INSTALLED, pkg-config, no)
if test "x$PKG_CONFIG_INSTALLED" = "xno"; then
        AC_MSG_WARN([You need to install pkg-config])
fi
PKG_PROG_PKG_CONFIG([0.20])

# dnl check for AX_CHECK_COMPILE_FLAG
# m4_ifdef([AX_CHECK_COMPILE_FLAG], [], [
#	AC_MSG_ERROR([Please install autoconf-archive; re-run 'autoreconf -fi' for it to take effect.])
#	])

# dnl checks for libraries
# AC_SEARCH_LIBS([dlopen], [dl dld], [LIBRARY_DL="$LIBS";LIBS=""])
# AC_SUBST(LIBRARY_DL)


# PKG_CHECK_MODULES(LIBOSMOCORE, libosmocore >= 0.12.0)
# PKG_CHECK_MODULES(LIBOSMOGSM, libosmogsm >= 0.12.0)
# PKG_CHECK_MODULES(LIBOSMOVTY, libosmovty >= 0.12.0)
# PKG_CHECK_MODULES(LIBOSMONETIF, libosmo-netif >= 0.3.0)

dnl Checks for typedefs, structures and compiler characteristics

# AC_MSG_RESULT([CFLAGS="$CFLAGS"])
# AC_MSG_RESULT([CPPFLAGS="$CPPFLAGS"])

# dnl Generate the output
# AM_CONFIG_HEADER(bscconfig.h)

AC_OUTPUT(
    osmo-gsm-manuals.pc
    Makefile)
