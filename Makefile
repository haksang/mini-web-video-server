CC = gcc
CFLAGS = -o
WARN = -Wall -W
#File
SOURCES_server = server.c
OBJECTS_server = server.o
TARGET_server = server

SOURCES_client = client.c
OBJECTS_client = client.o
TARGET_client = client


# build rule
.PHONY : all clean
all :
	$(CC) $(WARN) $(SOURCES_server) $(CFLAGS) $(TARGET_server)
	$(CC) $(WARN) $(SOURCES_client) $(CFLAGS) $(TARGET_client)

clean :
	-rm -f $(OBJECTS_server) $(OBJECTS_client) $(TARGET_server) $(TARGET_client)
