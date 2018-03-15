objects = main.o PrintStruct.o

exe : $(objects)
	cc -o exe $(objects)
PrintStruct.o : PrintStruct.c PrintStruct.h StructDef.h
	cc -c PrintStruct.c
main.o : main.c PrintStruct.h StructDef.h
	cc -c main.c

.PHONY : clean
clean :
	-rm exe $(objects)
