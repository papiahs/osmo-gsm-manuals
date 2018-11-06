AUTOMAKE_OPTIONS = foreign dist-bzip2 1.6

## FIXME: automake >= 1.13 or autoconf >= 2.70 provide better suited AC_CONFIG_MACRO_DIRS for configure.ac
## remove line below when OE toolchain is updated to version which include those
# ACLOCAL_AMFLAGS = -I m4
# AM_CPPFLAGS = \
#	$(all_includes) \
#	-I$(top_srcdir)/include \
#	$(NULL)

#SUBDIRS = \
#	doc \
#	include \
#	src \
#	tests \
#	contrib \
#	$(NULL)

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = \
	osmo-gsm-manuals.pc \
	$(NULL)

# https://www.gnu.org/savannah-checkouts/gnu/automake/manual/html_node/Extending.html
share_files=build common *.xsl
install-data-hook:
	for i in $$(find $(share_files) -not -type d); do \
		if [ -x "$$i" ]; then \
			mode=755; \
		else \
			mode=644; \
		fi; \
		install -vDm$$mode "$$i" "$(prefix)/share/osmo-gsm-manuals/$$i"; \
	done;
	install -Dm755 check-depends.sh "$(prefix)/bin/osmo-gsm-manuals-check-depends"

BUILT_SOURCES = $(top_srcdir)/.version
EXTRA_DIST = git-version-gen .version

uninstall-local:
	rm -rv "$(prefix)/share/osmo-gsm-manuals" \
		"$(prefix)/bin/osmo-gsm-manuals-check-depends"

#DISTCHECK_CONFIGURE_FLAGS = \
#	--with-systemdsystemunitdir=$$dc_install_base/$(systemdsystemunitdir)

# @RELMAKE@

$(top_srcdir)/.version:
	echo $(VERSION) > $@-t && mv $@-t $@
dist-hook:
	echo $(VERSION) > $(distdir)/.tarball-version
