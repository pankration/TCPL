objects = main.o PrintStruct.o

exe : $(objects)
	cc -o exe $(objects)
PrintStruct.o :
	cc -c PrintStruct.c
main.o :
	cc -c main.c

.PHONY : clean
clean :
	-rm exe $(objects)
