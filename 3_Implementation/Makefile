SRC=src/And.c src/Nand.c src/Nor.c src/Not.c src/Or.c src/Xor.c

INC=inc unity

all.exe:$(SRC) main.c
	gcc -I $(INC) $(SRC) main.c -o all.exe
	./all.exe

run:all.exe
	all.exe

clean:
	del /q *.exe
