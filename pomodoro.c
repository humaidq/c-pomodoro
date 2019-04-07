#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#include "pomodoro.h"

void startTimer(unsigned long seconds) {
  unsigned long start = (unsigned long)time(NULL);
  while(((unsigned long)time(NULL) - start) < seconds) {
    int totalSecs = (int)time(NULL) - start;
    int hourRem = totalSecs %3600;
    printf("%02d:%02d:%02d\n", totalSecs/3600, hourRem/60, hourRem%60);
    sleep(1);
  }
}

int main() {
  int cycle = 1;
  for(;cycle<MAX_CYCLES;cycle++) {
    printf("--- Cycle %d ---\n", cycle);
    printf("Press enter to start cycle");
    getc(stdin);

    printf("Started %d min. cycle\n", POMO_DURATION);
    startTimer(POMO_DURATION*60);
    startTimer(5);
    printf("Timer ended!\n");

    int b = cycle%4 ? LONG_BREAK : SHORT_BREAK;
    printf("Press enter to start %d min. break", b);
    startTimer(b*60);

  }
  return 0;
}
