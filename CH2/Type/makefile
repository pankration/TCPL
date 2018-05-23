objects = main.o

exe : $(objects)
	cc -o exe $(objects)
main.o : main.c
	cc -c main.c

.PHONY : clean
clean :
	-rm exe $(objects)
