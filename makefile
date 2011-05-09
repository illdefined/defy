PREFIX = /usr
TARGET = $(DESTDIR)$(PREFIX)/include/defy/

everything: constant expect noreturn restrict

install: $(everything)
	mkdir -p $(TARGET)
	cp $> $(TARGET)

.h:
	sed -e '1i#pragma once\n#ifndef __defy_$*__\n#define __defy_$*__\n' \
		-e '$$a\\n#endif' $< >$@

.PHONY: everything install
.POSIX:
.SUFFIXES: .h
