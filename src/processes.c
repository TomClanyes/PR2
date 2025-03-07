#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <ctype.h>
#include "processes.h"

void list_processes() {
	DIR *dir = opendir("/proc");
	struct dirent *entry;

	if (!dir) {
		perror("opendir");
		return;
    }
	printf("Processes:\n");

	while ((entry = readdir(dir)) != NULL) {
		if (isdigit(entry->d_name[0])) {
			printf("PID: %s\n", entry->d_name);
        	}
	}	

	closedir(dir);
}
