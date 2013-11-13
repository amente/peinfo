SRC += peinfo.c \
       peread.c \
       peprint.c

peinto.exe: $(SRC)
	gcc -I. -o $@ $(SRC)
	
all: peinto.exe
	
clean:
	rm -f *.o *.exe
	
.DEFAULT: all

.PHONEY: clean