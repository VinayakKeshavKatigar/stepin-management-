#Target : dependency
#<TAB>Command

PROJECT_NAME = a.exe
SRC = test.c\



INC = inc

$(PROJECT_NAME): $(SRC)
	gcc -I $(INC) $(SRC) -o a.exe
	
run: $(PROJECT_NAME)
	$(PROJECT_NAME)
	
clean:
	del /q *.exe