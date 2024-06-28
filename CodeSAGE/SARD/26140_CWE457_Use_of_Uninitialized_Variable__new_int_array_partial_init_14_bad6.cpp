#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = new int[10];
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Partially initialize data */
 {
 int VAR4;
 for(VAR4=0; VAR4<(10/2); VAR4++)
 {
 VAR2[VAR4] = VAR4;
 }
 }
 }
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN2(VAR2[VAR4]);
 }
 }
 delete [] VAR2;
 }
}
#endif
