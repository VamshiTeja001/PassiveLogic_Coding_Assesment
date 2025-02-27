CC = gcc

OBJ = main.o traffic_light.o
EXEC = traffic_light_sim

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC)  -o $(EXEC) $(OBJ)

main.o: main.c traffic_light.h
	$(CC)  -c main.c

traffic_light.o: traffic_light.c traffic_light.h
	$(CC)  -c traffic_light.c

clean:
	rm -f $(OBJ) $(EXEC)

