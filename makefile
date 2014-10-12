gol: gol.o play.o display.o iterate.o
	gcc gol.o play.o display.o iterate.o -o gol

gol.o: gol.c gol.h
	gcc -c gol.c -o gol.o

play.o: play.c gol.h
	gcc -c play.c -o play.o

display.o: display.c gol.h
	gcc -c display.c -o display.o

iterate.o: iterate.c gol.h
	gcc -c iterate.c -o iterate.o
