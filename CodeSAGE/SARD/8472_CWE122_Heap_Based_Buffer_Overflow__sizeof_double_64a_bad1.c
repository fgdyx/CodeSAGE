#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 double * VAR3;
 VAR3 = NULL;
 /* FLAW: Using sizeof the pointer and not the data type in malloc() */
 VAR3 = (double *)malloc(sizeof(VAR3));
 *VAR3 = 1.7E300;
 FUN1(&VAR3);
}
#endif
