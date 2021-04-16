SRC=src/And.c src/Nand.c src/Nor.c src/Not.c src/Or.c src/Xor.c

INC=inc 
INC_U=unity

Test=unity/unity.c 

all.exe:$(SRC) main.c
	gcc -I $(INC) $(SRC) main.c -o all.exe
	./all.exe

testc:$(SRC) $(TEST) test.c 
	gcc -I $(INC) -I $(INC_U) $(SRC) $(Test) test.c -o test.exe 
	./test.exe

run:all.exe
	all.exe

clean:
	del /q *.exe
