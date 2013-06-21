ANTIDOTE_SRC := $(wildcard src/*.c)
ANTIDOTE_GUI_SRC := $(wildcard gui/*.c)
ANTIDOTE_CMD_SRC := $(wildcard cmd/*.c)


all: gui cmdline

gui:
	gcc -g $(ANTIDOTE_SRC) $(ANTIDOTE_GUI_SRC) -o bin/gui

cmdline:
	gcc -g $(ANTIDOTE_SRC) $(ANTIDOTE_CMD_SRC) -o bin/antidote
	
tests:
	gcc -g test/test.c -o bin/test
