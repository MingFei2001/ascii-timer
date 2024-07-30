#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // For sleep function

void print_ascii_art(const char *filename) {
  FILE *file = fopen(filename, "r");
  if (!file) {
    perror("Could not open ASCII art file");
    exit(EXIT_FAILURE);
  }

  char line[256];
  while (fgets(line, sizeof(line), file)) {
    printf("%s", line);
  }

  fclose(file);
}

void print_timer(int seconds) {
  for (int i = seconds; i > 0; --i) {
    printf("\rTime left: %d seconds\n", i);
    fflush(stdout);
    sleep(1);
  }
  printf("Time's up!\n");
}

int main() {
  int duration;
  char ascii_art_file[256];

  printf("How long do you want to count down?\ntime: ");
  scanf("%d", &duration);
  printf("Enter the ASCII art file path: ");
  scanf("%s", ascii_art_file);

  print_ascii_art(ascii_art_file);
  print_timer(duration);
  printf("Exiting program ...");

  return 0;
}
