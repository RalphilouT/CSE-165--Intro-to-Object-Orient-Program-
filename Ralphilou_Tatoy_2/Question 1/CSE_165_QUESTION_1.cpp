
/* imgproc.c - by David Blythe, SGI */

/* Examples of various image processing operations coded as OpenGL
   accumulation buffer operations.  This allows extremely fast   
   image processing on machines with hardware accumulation buffers
   (RealityEngine, InfiniteReality, VGX). */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <GL/glut.h>
#include "texture.h"

static unsigned *image, *null;
static int width, height, components;
static void (*func) (void);
static float alpha = 1.;
static float luma = .5;
static int reset = 1;
static int format = GL_RGBA;

void
brighten(void)
{
  if (reset) {
    memset(null, 0, width * height * sizeof *null);
    reset = 0;
  }
  glDrawPixels(width, height, format, GL_UNSIGNED_BYTE, image);
  glAccum(GL_LOAD, alpha / 2.);
  glDrawPixels(width, height, format, GL_UNSIGNED_BYTE, null);
  glAccum(GL_ACCUM, (1 - alpha) / 2.);
  glAccum(GL_RETURN, 2.0);
}

void
saturate(void)
{
  if (reset) {
    memset(null, 0xff, width * height * sizeof *null);
    reset = 0;
  }
  glDrawPixels(width, height, format, GL_UNS