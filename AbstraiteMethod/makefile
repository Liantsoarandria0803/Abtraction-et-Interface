exec=exec
cc=g++
all:$(exec)
obj: vehicule.cpp moto.cpp auto.cpp main.cpp
	$(cc) -c $^
exec: main.o vehicule.o moto.o auto.o
	$(cc) -o $@ $^
clean:
	 rm -f *.o
mrproper: clean
	rm -f form
