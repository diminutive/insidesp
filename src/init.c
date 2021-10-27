#include <R.h>
#include <Rinternals.h>
#include "a_inside.h"

#include <R_ext/Rdynload.h>

static const R_CMethodDef CEntries[]  = {
  {"InPoly", (DL_FUNC) &InPoly, 2},
  {NULL, NULL, 0}
};

static R_CallMethodDef CallEntries[] = {
  {"point_in_polygon_old_sp", (DL_FUNC) &point_in_polygon_old_sp, 4},
  {NULL, NULL, 0}
};


void R_init_insidesp(DllInfo *dll)
{
  R_registerRoutines(dll, CEntries, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);

}
