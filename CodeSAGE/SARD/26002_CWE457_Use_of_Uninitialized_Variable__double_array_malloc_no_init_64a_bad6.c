#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 double * VAR3;
 VAR3 = (double *)malloc(10*sizeof(double));
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 FUN1(&VAR3);
}
#endif
