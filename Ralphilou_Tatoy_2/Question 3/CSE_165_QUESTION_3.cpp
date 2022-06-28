 * sizeof *image);

  glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
  glClearColor(.25, .25, .25, .25);

  /* compute luminance */
  for (i = 0; i < width * height; i++) {
    GLubyte *p = (GLubyte *) (image + i);
    double r = p[0] / 255.;
    double g = p[1] / 255.;
    double b = p[2] / 255.;
    l += r * .3086 + g * .0820 + b * .114;
  }
  luma = l / (width * height);
  printf("average luminance = %f\n", luma);
}

void
display(void)
{
  printf("alpha = %f\n", alpha);
  glClear(GL_COLOR_BUFFER_BIT);
  (*func) ();
  glutSwapBuffers();
}

void
reshape(int w, int h)
{
  glViewport(0, 0, w, h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
