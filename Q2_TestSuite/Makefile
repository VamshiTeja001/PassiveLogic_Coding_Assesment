# Compiler
CC = gcc



# Object Files
OBJ = main.o traffic_light.o

# Executable Names
EXEC = traffic_light_sim
TEST_EXEC = traffic_light_test

# Unity Testing Framework
UNITY_SRC = unity/unity.c
UNITY_OBJ = unity.o

all: $(EXEC)

# Compile main executable
$(EXEC): $(OBJ)
	$(CC)  -o $(EXEC) $(OBJ)

# Compile source files
main.o: main.c traffic_light.h
	$(CC)  -c main.c

traffic_light.o: traffic_light.c traffic_light.h
	$(CC)  -c traffic_light.c

# Compile Unity framework
$(UNITY_OBJ): $(UNITY_SRC)
	$(CC)  -c $(UNITY_SRC) -o $(UNITY_OBJ)

# Compile test executable
$(TEST_EXEC): traffic_light_test.c traffic_light.o $(UNITY_OBJ)
	$(CC)  -o $(TEST_EXEC) traffic_light_test.c traffic_light.o $(UNITY_OBJ)

# Run the tests
test: $(TEST_EXEC)
	./$(TEST_EXEC)

# Clean  build files
clean:
	rm -f $(OBJ) $(EXEC) $(TEST_EXEC) $(UNITY_OBJ)


