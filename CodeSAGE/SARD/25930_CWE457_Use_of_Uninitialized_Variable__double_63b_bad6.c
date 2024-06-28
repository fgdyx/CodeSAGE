#ifndef VAR1
void FUN1(double * VAR2)
{
 double VAR3 = *VAR2;
 /* POTENTIAL FLAW: Use data without initializing it */
 FUN2(VAR3);
}
#endif
