#ifndef IO_H
#define IO_H
#include <Rdefines.h>

SEXP summarize_file(SEXP filename, SEXP max_length, 
                    SEXP quality_type, SEXP hash, SEXP verbose);
#endif
