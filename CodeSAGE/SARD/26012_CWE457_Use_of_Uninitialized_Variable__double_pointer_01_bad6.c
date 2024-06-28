#ifndef VAR1
void FUN1()
{
 double * VAR2;
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 /* POTENTIAL FLAW: Use data without initializing it */
 FUN2(*VAR2);
}
#endif
