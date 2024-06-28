#ifndef VAR1
void FUN1()
{
 double * VAR2;
 VAR2 = (double *)malloc(10*sizeof(double));
 if(VAR3)
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 if(VAR3)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN2(VAR2[VAR4]);
 }
 }
 }
}
#endif
