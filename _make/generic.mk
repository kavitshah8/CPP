# compiler/linker configs
CXX = clang++
LD = clang++
CFLAGS = -Wall

# output releated configs
EXE = main

all:
	${CXX} ${CFLAGS} ${FILES} -o ${EXE} 
