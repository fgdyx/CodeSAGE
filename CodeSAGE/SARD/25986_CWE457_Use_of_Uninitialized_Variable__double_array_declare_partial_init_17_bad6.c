#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 double * VAR4;
 double VAR5[10];
 VAR4 = VAR5;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* POTENTIAL FLAW: Partially initialize data */
 {
 int VAR2;
 for(VAR2=0; VAR2<(10/2); VAR2++)
 {
 VAR4[VAR2] = (double)VAR2;
 }
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR2;
 for(VAR2=0; VAR2<10; VAR2++)
 {
 FUN2(VAR4[VAR2]);
 }
 }
 }
}
#endif
