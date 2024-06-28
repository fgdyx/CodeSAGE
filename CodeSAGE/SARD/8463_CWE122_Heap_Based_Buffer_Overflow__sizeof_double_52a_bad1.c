#ifndef VAR1
void FUN1(double * VAR2);
void FUN2()
{
 double * VAR2;
 VAR2 = NULL;
 /* FLAW: Using sizeof the pointer and not the data type in malloc() */
 VAR2 = (double *)malloc(sizeof(VAR2));
 *VAR2 = 1.7E300;
 FUN1(VAR2);
}
#endif
