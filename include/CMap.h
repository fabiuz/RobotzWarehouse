/**
 * GameJam 2009 - GamePlay
 *
 * The map class file.
 */

#ifndef _CMAP_H_
#define _CMAP_H_

#include <allegro.h>

#include "CInput.h"

#define RADIUS          15

#define GET_I			(i*(RADIUS * 1.3)*2) + RADIUS
#define GET_J			(j*(RADIUS * 1.3)*2) + RADIUS

#define MAX_ITEMS		2

enum EItem
{
   EITEM_NULL,
   EITEM_A,
   EITEM_B
};

class CMap
{
   private:
	  CInput Input;
   
      EItem **items;

      int width, height;
	  
	  int x, y;
	  
	  bool full;
	  
	  // Did the player clicked once?
	  bool clicked;
	  
	  // These are for highlighting the current selected
	  int sel_x, sel_y;

   public:
      CMap();

      void initMatrix();

      // Setters
      void setWidth(int w);
      void setHeight(int h);
	  
	  void setX(int px);
	  void setY(int py);
	  
	  void setFull(bool op);

      // Getters
      int getWidth();
      int getHeight();
	  
	  int getX();
	  int getY();
	  
	  // Is the map already full?
	  bool getFull();
	  
	  // Place the map in the center of the screen
	  void center();	
	  
	  bool isClicked(int i, int j);
	  
      EItem **getMap();

      void show(BITMAP *buffer);
	  
	  void update();
};



#endif

