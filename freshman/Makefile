all: main.exe

OBJ = main.o area.o peri.o show.o

clear::
	-rm main.exe $(OBJ)

main.exe: $(OBJ)
	gcc $(OBJ) -o main.exe

%.o:%.c
	gcc -c $^ -o $@
