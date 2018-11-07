pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = \
	osmo-gsm-manuals.pc \
	$(NULL)
BUILT_SOURCES = $(top_srcdir)/.version
EXTRA_DIST = git-version-gen .version
SUBDIRS = tests

$(top_srcdir)/.version:
	echo $(VERSION) > $@-t && mv $@-t $@
dist-hook:
	echo $(VERSION) > $(distdir)/.tarball-version

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

uninstall-local:
	rm -rv "$(prefix)/share/osmo-gsm-manuals" \
		"$(prefix)/bin/osmo-gsm-manuals-check-depends"
