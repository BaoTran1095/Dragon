#include "Dragon.h"

using namespace std;

//-----------------------------------Dragon constructor-------------------------
Dragon::Dragon( float initX, float initY, float initAngle ) 
  : Turtle( initX, initY, initAngle ) {
}

//------------------------------ leftCurve ----------------------------------
// draw a level-l left curve with dist d
void Dragon::leftCurve( int level, float d ) {
  if ( level > 0 ) {
    // implement this part!!
     leftCurve(level - 1, d);
     turn(90);
     rightCurve(level - 1, d);
     turn(90);
  }
  else
    draw( d );
}

//------------------------------ rightCurve ---------------------------------
// draw a level-l right curve with dist d
void Dragon::rightCurve( int level, float d ) {
  if ( level > 0 ) {
    // implement this part!!
      turn(-90);
      leftCurve(level - 1, d);
      turn(-90);
      rightCurve(level - 1, d);
  }else
    draw( d );
}