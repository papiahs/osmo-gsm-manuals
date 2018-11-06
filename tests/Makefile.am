TOPDIR = ..

ASCIIDOC = test-usermanual.adoc
ASCIIDOC_DEPS = chapters/*.adoc
include $(TOPDIR)/build/Makefile.asciidoc.inc

VTY_REFERENCE = test-vty-reference.xml
include $(TOPDIR)/build/Makefile.vty-reference.inc

include $(TOPDIR)/build/Makefile.common.inc

# Generate adoc file that includes all chapters
$(ASCIIDOC): ../common/chapters/*.adoc
	echo ":gfdl-enabled:" > $@
	echo ":program-name: Test" >> $@
	echo "" >> $@
	echo "Osmo GSM Manuals Shared Content Test" >> $@
	echo "====================" >> $@
	echo "Oliver Smith <osmith@sysmocom.de>" >> $@
	echo "" >> $@
	cd ../common/;
		for i in chapters/*.adoc; do \
			echo "include::{common}/$$i[]" >> $@; \
		done;
