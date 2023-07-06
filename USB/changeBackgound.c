#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <linux/input.h>
#include <unistd.h>

#define MOUSEFILE "/dev/myDev"

int main() {
    int fd;
    struct input_event ie;
    unsigned char *ptr = (unsigned char*)&ie;
    unsigned char button, bLeft, bMiddle, bRight;
    char x, y;

    if ((fd = open(MOUSEFILE, O_RDONLY | O_NONBLOCK)) == -1) {
        printf("NonBlocking %s open ERROR\n", MOUSEFILE);
        exit(EXIT_FAILURE);
    } else {
        printf("NonBlocking %s open OK\n", MOUSEFILE);
    }

    printf("--------------------------------------------------------\n");
    printf("Left click to change wallpaper\n");
    printf("--------------------------------------------------------\n");

    while (1) {
        if (read(fd, &ie, sizeof(struct input_event)) != -1) {
            //system("clear");
            button = ptr[0];
           // printf("---------\n");
            //printf("%d\n", (int)button);
            bLeft = button & 0x1;
            //printf("Left : %d\n", bLeft);
            //printf("---------\n");

            if (bLeft == 1) {
                // Add a delay here to differentiate between quick press and longer press
                usleep(200000);  // Delay for 200 milliseconds

                // Check if the left button is still pressed after the delay
                if (read(fd, &ie, sizeof(struct input_event)) != -1) {
                    button = ptr[0];
                    bLeft = button & 0x1;

                    if (bLeft == 1) {
			//system("clear");
                        system("../../.././newback.sh");
                        printf("\nChange background Ok!");
                    }
                }
            }

            fflush(stdout);
        }
    }

    // Wait for release of middle button
    int a;
    int b;

    while (1) {
        if (read(fd, &ie, sizeof(struct input_event)) != -1) {
            a = ptr[0];
            b = (a & 0x4) > 0;

            if (b == 0) break;
        }
    }

    close(fd);
    fflush(stdout);

    return 0;
}
