#include <ncurses.h>  // functions to draw colored text

void bluetooth(int width) {
  // 1. Fill the entire background with Blue
  attron(COLOR_PAIR(1));
  for (auto line = 0; line < LINES; line++) {
    for (auto col = 0; col < COLS; col++) {
      mvaddch(line, col, ' ');
    }
  }
  attroff(COLOR_PAIR(1));

  // 2. Draw the white Bluetooth icon in the middle of the screen
  attron(COLOR_PAIR(2));
  
  // Calculate center offsets so the icon sits in the middle of the terminal
  int start_x = (COLS - width) / 2;
  int start_y = (LINES - (width * 2 - 1)) / 2;
  int mid_x = width / 2; // The local center column of the icon

  for (auto line = 0; line < width * 2 - 1; line++) {
    for (auto col = 0; col < width; col++) {
      
      bool draw_pixel = false;

      // Rule A: The vertical spine in the middle
      if (col == mid_x) {
        draw_pixel = true;
      }
      // Rule B: Top-right and bottom-left pointing diagonal lines
      else if (line - col == mid_x) {
        draw_pixel = true;
      }
      // Rule C: Bottom-right and top-left pointing diagonal lines
      else if (line + col == width - 1 + mid_x) {
        draw_pixel = true;
      }
      // Rule D: The outer closing triangles (the bounding chevrons)
      else if (col > mid_x && (line == col - mid_x || line == (width * 2 - 2) - (col - mid_x))) {
        draw_pixel = true;
      }

      // If any geometric rule matches, draw the white block
      if (draw_pixel) {
        mvaddch(start_y + line, start_x + col, ' '); 
      }
    }
  }
  attroff(COLOR_PAIR(2));
  
  refresh(); // Tell ncurses to push the changes to the real terminal screen
}

int main() {
  initscr(); curs_set(0);  // ncurses: initialize window, hide cursor
  noecho();  // don't show keys pressed in terminal
  start_color();  // use color
  init_pair(1, COLOR_BLACK, COLOR_BLUE);
  init_pair(2, COLOR_BLACK, COLOR_WHITE);
  bluetooth(2);  // draw a bluetooth icon of width 9
  char c = ' ';
  while ( c != 'q' )  c = getch();  // wait until user presses q
  endwin();  // ncurses function: close the ncurses window
}
