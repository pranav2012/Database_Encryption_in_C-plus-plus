SRC := src/include/
OBJ := src/obj/
OBJECTS := Database.o File.o Login.o SignUp.o Encryptdecrypt.o loading.o Main.o users.o
SR := ../include/

run: main
	cd ${OBJ} && ./main

main: src/main.cpp ${OBJECTS}
	cd ${OBJ} && g++ ../main.cpp ${OBJECTS} -l sqlite3 -o main

Database.o: ${SRC}Database.cpp
	cd ${OBJ} && g++ -c ${SR}Database.cpp

File.o: ${SRC}File.cpp
	cd ${OBJ} && g++ -c ${SR}File.cpp

Login.o: ${SRC}Login.cpp
	cd ${OBJ} && g++ -c ${SR}Login.cpp

SignUp.o: ${SRC}SignUp.cpp
	cd ${OBJ} && g++ -c ${SR}SignUp.cpp

Encryptdecrypt.o: ${SRC}Encryptdecrypt.cpp
	cd ${OBJ} && g++ -c ${SR}Encryptdecrypt.cpp

loading.o: ${SRC}loading.cpp
	cd ${OBJ} && g++ -c ${SR}loading.cpp

Main.o: ${SRC}Main.cpp
	cd ${OBJ} && g++ -c ${SR}Main.cpp

users.o: ${SRC}users.cpp
	cd ${OBJ} && g++ -c ${SR}users.cpp

clean:
	cd src/obj && rm ${OBJECTS} main 
