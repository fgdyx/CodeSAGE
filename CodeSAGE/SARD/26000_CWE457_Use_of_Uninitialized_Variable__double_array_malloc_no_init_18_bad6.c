#ifndef VAR1
void FUN1()
{
 double * VAR2;
 VAR2 = (double *)malloc(10*sizeof(double));
 goto VAR3;
VAR3:
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 goto VAR4;
VAR4:
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN2(VAR2[VAR5]);
 }
 }
}
#endif
