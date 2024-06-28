#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 double * VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 FUN2(*VAR4);
 }
}
#endif
