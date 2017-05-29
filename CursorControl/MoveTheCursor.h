#ifndef MOVETHECURSOR_H
#define MOVETHECURSOR_H
#include <iostream>
#include <windows.h>

class MoveTheCursor
{
public:
   MoveTheCursor();
   void CursorMovement(int x = 0, int y = 0);
   void PressingLeftMouseButton();
   void PressingRightMouseButton();
};

#endif // MOVETHECURSOR_H
