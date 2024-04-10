#include <stdio.h>
#include <pthread.h>

void *run(void *threadName) {
    for (int i = 0; i < 5; i++) {
        printf("%s: %d\n", (char *)threadName, i);
    }
    pthread_exit(NULL);
}

int main() {
    pthread_t thread1, thread2;
    char *name1 = "thread 1";
    char *name2 = "thread 2";

    printf("Launching threads\n");

    pthread_create(&thread1, NULL, run, name1);
    pthread_create(&thread2, NULL, run, name2);

    if (pthread_join(thread1, NULL) != 0 || pthread_join(thread2, NULL) != 0) {
        perror("pthread_join");
        return 1;
    }

    printf("Threads complete!\n");

    return 0;
}
