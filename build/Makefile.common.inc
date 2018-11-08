# Usage:
#
# Other makefiles like Makefile.asciidoc.inc and Makefile.vty-reference.inc add
# entries to UPLOAD_FILES and CLEAN_FILES.
#
# Include this file at the end to have 'upload' and 'clean' targets.

UPLOAD_PATH ?= generic@sysmocom-downloads:documents
CLEAN_FILES += common

upload: $(UPLOAD_FILES)
	rsync -avz $(UPLOAD_FILES) $(UPLOAD_PATH)/

clean:
	-rm -rf $(CLEAN_FILES)

# Make "common" a relative path (so we can use it in xml and sty files, which
# don't accept variables in paths)
common: $(TOPDIR)/common
	ln -s "$(TOPDIR)/common" ./common
