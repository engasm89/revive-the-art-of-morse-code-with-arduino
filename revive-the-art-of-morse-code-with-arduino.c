/*
 * Course: Revive The Art Of Morse Code With Arduino
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: Revive The Art Of Morse Code With Arduino
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Include I/O for Morse logs
#include <unistd.h> // Include sleep for timing

// Morse timings (units)
static const int DOT = 1; // Dot length
static const int DASH = 3; // Dash length
static const int GAP = 1; // Intra-character gap

void blink_units(int units) { // Blink helper
  printf("LED ON (%d units)\n", units); // Log on
  usleep(units * 100000); // Delay
  printf("LED OFF\n"); // Log off
  usleep(GAP * 100000); // Gap
} // End blink_units

void morse_S(void) { // 'S' = DOT DOT DOT
  blink_units(DOT); // Dot 1
  blink_units(DOT); // Dot 2
  blink_units(DOT); // Dot 3
} // End morse_S

void morse_O(void) { // 'O' = DASH DASH DASH
  blink_units(DASH); // Dash 1
  blink_units(DASH); // Dash 2
  blink_units(DASH); // Dash 3
} // End morse_O

// Main routine: orchestrates the revive the art of morse code with arduino scenario
int main(void) { // Entry
  printf("Revive the Art of Morse Code with Arduino!\n"); // Title
  morse_S(); // S
  morse_O(); // O
  morse_S(); // S
  return 0; // Exit
} // End main

