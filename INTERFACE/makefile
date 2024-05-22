exec=exec
cc=g++
all:$(exec)
obj: strategie.cpp foot.cpp jeu.cpp combat.cpp main.cpp
	$(cc) -c $^
exec: main.o strategie.o foot.o combat.o jeu.o
	$(cc) -o $@ $^
clean:
	 rm -f *.o
mrproper: clean
	rm -f form
