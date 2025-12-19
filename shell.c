#include <stdio.h>
#include <string.h>

int main() {
    char command[256];
    
    while (1) {
        // Write prompt
        printf("$");
        fflush(stdout);  // Force output immediately
        
        // Read input
        if (fgets(command, sizeof(command), stdin) == NULL) {
            break;
        }
        
        // Remove newline
        command[strcspn(command, "\n")] = '\0';
        
        // Check for exit
        if (strcmp(command, "exit") == 0) {
            printf("Goodbye!\n");
            break;
        }
	//update so its a list of arguments arg0 arg1 
	if (strcmp(command, "cd")){
		printf("cd command\n");
		break;	
	}

        
        // Echo command back
        printf("You entered: %s\n", command);
    }
    
    return 0;
}
