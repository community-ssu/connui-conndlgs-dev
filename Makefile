SRC = ./
DESTDIR =
INCLUDEDIR = $(DESTDIR)/usr/include

INSTALL = install
INSTALL_PROGRAM = $(INSTALL)

INSTALL_INCLUDES = connui-conndlgs.h

all:

install:
	$(INSTALL_PROGRAM) -d $(INCLUDEDIR)
	$(INSTALL_PROGRAM) -m644 $(INSTALL_INCLUDES) $(INCLUDEDIR)

clean:
	$(RM) *~
