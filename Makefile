# CoreFreq
# Copyright (C) 2015-2018 CYRIL INGENIERIE
# Licenses: GPL2

obj-m := corefreqk.o
KVERSION = $(shell uname -r)
DESTDIR = $(HOME)
CC = cc

ROOT_DIR:=$(shell dirname $(realpath $(lastword $(MAKEFILE_LIST))))

all: corefreqd corefreq-cli corefreq-cffi-out.h
	make -C /lib/modules/$(KVERSION)/build M=${ROOT_DIR} modules

clean:
	make -C /lib/modules/$(KVERSION)/build M=${ROOT_DIR} clean
	rm corefreqd corefreq-cli

corefreqm.o: corefreqm.c
	$(CC) -Wall -c corefreqm.c -o corefreqm.o

corefreqd.o: corefreqd.c
	$(CC) -Wall -pthread -c corefreqd.c -o corefreqd.o

corefreqd: corefreqd.o corefreqm.o
	$(CC) corefreqd.c corefreqm.c -o corefreqd -lpthread -lm -lrt

corefreq-ui.o: corefreq-ui.c
	$(CC) -Wall -c corefreq-ui.c -o corefreq-ui.o

corefreq-cli.o: corefreq-cli.c
	$(CC) -Wall -c corefreq-cli.c -o corefreq-cli.o

corefreq-cli: corefreq-cli.o corefreq-ui.o
	$(CC) corefreq-cli.c corefreq-ui.c -o corefreq-cli -lm -lrt

corefreq-cffi.h: bitasm.h amdmsr.h intelmsr.h coretypes.h corefreq.h corefreqm.h corefreq-api.h

corefreq-cffi-out.h: corefreq-cffi.h
	$(CC) -DCFFI=1 -E corefreq-cffi.h > corefreq-cffi-out.h
