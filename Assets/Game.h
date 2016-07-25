/****************************************************************************************** 
 *	Game.h																				  *
	Copyright 2015 –Èª√¥Û—ß <http://www.oxox.work>
 ******************************************************************************************/
#pragma once

#include "D3DGraphics.h"
#include "Keyboard.h"

class Game
{
public:
	Game( HWND hWnd,const KeyboardServer& kServer );
	void Go();
private:
	void ComposeFrame();
	void DrawReticle(int, int, int, int, int);
	void DrawFace(int , int );
	void DrawPoo(int , int );
	void DrawGameOver(int x, int );
	/********************************/
	/*  User Functions              */
	int faceX;
	int faceY;

	int poo1X;
	int poo1Y;
	bool isPoo1Eaten;

	int poo2X;
	int poo2Y;
	bool isPoo2Eaten;

	int poo3X;
	int poo3Y;
	bool isPoo3Eaten;
	// TODO: User functions go here

	/********************************/
private:
	D3DGraphics gfx;
	KeyboardClient kbd;
	
	/********************************/
	/*  User Variables              */

	// TODO: User variables go here

	/********************************/
};