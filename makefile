PREFIX = /usr
TARGET = $(DESTDIR)$(PREFIX)/include/defy/

everything = bool constant expect nil noreturn offsetof restrict
everything: $(everything)

install: $(everything)
	mkdir -p $(TARGET)
	cp $(everything) $(TARGET)

.h:
	sed -e '1i#pragma once\n#ifndef __defy_$*__\n#define __defy_$*__\n' \
		-e '$$a\\n#endif' $< >$@

.PHONY: everything install
.POSIX:
.SUFFIXES: .h
