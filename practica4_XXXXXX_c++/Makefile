# AUTORES: HAYK KOCHARYAN(757715) - JAVIER SALAMERO SANZ (756868)
# PRÁCTICA 4 - TEONOLOGÍA DE LA PROGRAMACIÓN
# FECHA ÚLTIMA MODIFICACÍÓN: 27 ABRIL 2019
PROG=main
SRCS=main.cc

CC=g++ -std=c++11
#CC=clang++ -std=c++11

CFLAGS:=-O3

OBJS=$(SRCS:.cc=.o)

all: $(PROG)

$(PROG): $(OBJS) almacen.o camion.o contenedor.o producto.o contenido.o servivo.o toxico.o
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cc
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(PROG) $(OBJS) core *.o

dep:
	@makedepend -Y -- $(CFLAGS) -- $(SRCS) 2> /dev/null
	@rm -f Makefile.bak

# DO NOT DELETE