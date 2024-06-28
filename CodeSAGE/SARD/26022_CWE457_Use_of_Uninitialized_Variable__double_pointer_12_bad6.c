#ifndef VAR1
void FUN1()
{
 double * VAR2;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 else
 {
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 FUN3(*VAR2);
 }
 else
 {
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
 FUN3(*VAR2);
 }
}
#endif
