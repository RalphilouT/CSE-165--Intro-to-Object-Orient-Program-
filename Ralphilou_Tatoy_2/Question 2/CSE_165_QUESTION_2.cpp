
/* Copyright (c) Mark J. Kilgard, 1994. */

/* This program is freely distributable without licensing fees 
   and is provided without guarantee or warrantee expressed or 
   implied. This program is -not- in the public domain. */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>

#define NUM_DIALS 8
#define NUM_BUTTONS 32

int *dials, *buttons;

#undef PI /* Some systems may have this defined. */
#define PI            3.14159265358979323846

void
drawCircle(int x, int y, int r, int dir)
{
   float angle;

   glPushMatrix();
   glTranslatef(x,y,0);
   glBegin(GL_TRIANGLE_FAN);
   glVertex2f(0,0);
   for(angle = 2*PI; angle >= 0; angle -= PI/12) {
      glVertex2f(r*cos(angle),r*sin(angle));
   }
   glEnd();
   glColor3f(0,0,1);
   glBegin(GL_LINES);
   glVert