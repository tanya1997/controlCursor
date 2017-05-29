#include "MoveTheCursor.h"

MoveTheCursor::MoveTheCursor()
{

}

void MoveTheCursor::CursorMovement(int x, int y)
{
    mouse_event(MOUSEEVENTF_MOVE,x,y,0,0);
}

void MoveTheCursor::PressingLeftMouseButton()
{
    mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
    mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
}

void MoveTheCursor::PressingRightMouseButton()
{
    mouse_event(MOUSEEVENTF_RIGHTDOWN,0,0,0,0);
    mouse_event(MOUSEEVENTF_RIGHTUP,0,0,0,0);
}

