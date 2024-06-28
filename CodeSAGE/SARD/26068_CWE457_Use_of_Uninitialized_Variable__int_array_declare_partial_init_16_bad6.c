#ifndef VAR1
void FUN1()
{
 int * VAR2;
 int VAR3[10];
 VAR2 = VAR3;
 while(1)
 {
 /* POTENTIAL FLAW: Partially initialize data */
 {
 int VAR4;
 for(VAR4=0; VAR4<(10/2); VAR4++)
 {
 VAR2[VAR4] = VAR4;
 }
 }
 break;
 }
 while(1)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN2(VAR2[VAR4]);
 }
 }
 break;
 }
}
#endif
