#ifndef VAR1
void FUN1(double * VAR2);
void FUN2()
{
 double VAR3;
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 FUN1(&VAR3);
}
#endif
