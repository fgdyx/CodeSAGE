#ifndef VAR1
void FUN1()
{
 double * VAR2;
 VAR2 = (double *)FUN2(10*sizeof(double));
 if(VAR3)
 {
 /* POTENTIAL FLAW: Partially initialize data */
 {
 int VAR4;
 for(VAR4=0; VAR4<(10/2); VAR4++)
 {
 VAR2[VAR4] = (double)VAR4;
 }
 }
 }
 if(VAR3)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR2[VAR4]);
 }
 }
 }
}
#endif
