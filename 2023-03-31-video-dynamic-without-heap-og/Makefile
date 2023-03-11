PROG = main 
SRC = main.c

TOP = ../..

CFLAGS = -g
LIBS = 





all: $(PROG)

$(PROG): $(SRC)
	$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $(SRC)  $(LIBS) 

clean:
	rm -f $(CIVETWEB_LIB) $(PROG)

help:
	@echo "make help                show this message"
	@echo "make clean               remove result"
	@echo "make all                 build all"
	@echo "make                     build all"
	@echo ""
	@echo " Make Options:"
	@echo "   NO_SSL=1              build without SSL support"
	@echo ""

.PHONY: all clean
