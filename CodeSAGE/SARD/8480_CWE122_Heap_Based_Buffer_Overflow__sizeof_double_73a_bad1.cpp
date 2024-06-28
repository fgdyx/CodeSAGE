#ifndef VAR1
void FUN1(VAR2<double *> VAR3);
void FUN2()
{
 double * VAR4;
 VAR2<double *> VAR3;
 VAR4 = NULL;
 /* FLAW: Using sizeof the pointer and not the data type in malloc() */
 VAR4 = (double *)malloc(sizeof(VAR4));
 *VAR4 = 1.7E300;
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN1(VAR3);
}
#endif
