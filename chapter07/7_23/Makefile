CXX = g++ --std=c++0x
OBJS = main.o ./screen.o
TARGET = a.out
CFLAGS = -I. -O2
RM = rm -f
$(TARGET):$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS)
$(OBJS):%.o : %.cpp
	$(CXX) -c $< -o $@
clean:
	-$(RM) $(TARGET) $(OBJS)
