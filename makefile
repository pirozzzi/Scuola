maxmin.out: top.o max.o min.o
	cc top.o max.o min.o -o maxmin.out
top.o: top.c max.h min.h
	cc -c top.c
max.o: max.c max.h
	cc -c max.c
min.o: min.c min.h
	cc -c min.c
clean:
	rm -r "*.o"