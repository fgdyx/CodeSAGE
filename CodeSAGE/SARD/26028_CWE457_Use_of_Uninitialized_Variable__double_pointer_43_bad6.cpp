#ifndef VAR1
static void FUN1(double * &VAR2)
{
 /* POTENTIAL FLAW: Don't initialize data */
 ;
}
void FUN2()
{
 double * VAR2;
 FUN1(VAR2);
 /* POTENTIAL FLAW: Use data without initializing it */
 FUN3(*VAR2);
}
#endif
