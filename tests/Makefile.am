TOPDIR = $(realpath $(srcdir)/..)

# Generate adoc file that includes all chapters
ASCIIDOC = test-usermanual.adoc
ASCIIDOC_DEPS =
$(ASCIIDOC): $(TOPDIR)/common/chapters/*.adoc
	echo ":gfdl-enabled:" > $@
	echo ":program-name: Test" >> $@
	echo "" >> $@
	echo "Osmo GSM Manuals Shared Content Test" >> $@
	echo "====================================" >> $@
	echo "Oliver Smith <osmith@sysmocom.de>" >> $@
	echo "" >> $@
	for i in $(TOPDIR)/common/chapters/*.adoc; do \
		echo "include::{common}/chapters/$$(basename $$i)[]" >> $@; \
	done;
CLEAN_FILES = $(ASCIIDOC)

include $(TOPDIR)/build/Makefile.asciidoc.inc

VTY_REFERENCE = test-vty-reference.xml
include $(TOPDIR)/build/Makefile.vty-reference.inc
include $(TOPDIR)/build/Makefile.common.inc
