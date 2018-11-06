all: include-everything.pdf

include-everything.pdf: include-everything.adoc

include-everything.adoc: ../common/chapters/* ../common/*.xml check-depends


check-depends:
	../check-depends.sh

.PHONY: check-depends
