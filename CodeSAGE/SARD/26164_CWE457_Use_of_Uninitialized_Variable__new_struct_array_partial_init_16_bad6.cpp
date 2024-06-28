#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = new VAR2[10];
 while(1)
 {
 /* POTENTIAL FLAW: Partially initialize data */
 {
 int VAR4;
 for(VAR4=0; VAR4<(10/2); VAR4++)
 {
 VAR3[VAR4].VAR5 = VAR4;
 VAR3[VAR4].VAR6 = VAR4;
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
 FUN2(VAR3[VAR4].VAR5);
 FUN2(VAR3[VAR4].VAR6);
 }
 }
 delete [] VAR3;
 break;
 }
}
#endif
