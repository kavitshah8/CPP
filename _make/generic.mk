# https://www.tutorialspoint.com/makefile/makefile_rules.htm
# https://stackoverflow.com/questions/2270643/what-is-a-make-target
# https://stackoverflow.com/questions/3220277/what-do-the-makefile-symbols-and-mean

# compiler/linker configs
CXX = clang++
LD = clang++
CFLAGS = -Wall

# output releated configs
EXE = main

# first default rule
#${} also works 
all: $(EXE)

$(EXE): $(OBJS)	
	$(CXX) $(CFLAGS) $(FILES) -o $(EXE) 
# Todo: replaced files with objects $(CXX) $(CFLAGS) $(FILES) -o $(EXE) 
# Todo: put object files into seperate directory