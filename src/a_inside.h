// sp.h
#include <R.h>
#include <Rdefines.h>
#include <Rinternals.h>
#include <Rmath.h>

/* from sp.src/pip.c */

#ifndef MIN
# define MIN(a,b) ((a)>(b)?(b):(a))
#endif
#ifndef MAX
# define MAX(a,b) ((a)>(b)?(a):(b))
#endif

/* polygon structs: */
typedef struct {
  double		x, y;
} PLOT_POINT;

typedef struct {
  PLOT_POINT	min, max;
} MBR;

typedef struct polygon {
  MBR mbr;
  int lines;
  PLOT_POINT	*p;
  int close; /* 1 - is closed polygon */
} POLYGON;
// unused mdsumner 2021-10-26
//void setup_poly_minmax(POLYGON *pl);
char InPoly(PLOT_POINT q, POLYGON *Poly);
SEXP point_in_polygon_old_sp(SEXP px, SEXP py, SEXP polx, SEXP poly);

// end sp.h


