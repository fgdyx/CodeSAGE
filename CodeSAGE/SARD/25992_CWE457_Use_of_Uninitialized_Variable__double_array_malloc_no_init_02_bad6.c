#ifndef VAR1
void FUN1()
{
 double * VAR2;
 VAR2 = (double *)malloc(10*sizeof(double));
 if(1)
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 if(1)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN2(VAR2[VAR3]);
 }
 }
 }
}
#endif
