#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = new VAR2[10];
 if(5==5)
 {
 /* POTENTIAL FLAW: Partially initialize data */
 for(int VAR4=0; VAR4<(10/2); VAR4++)
 {
 VAR3[VAR4].VAR5 = VAR4;
 VAR3[VAR4].VAR6 = VAR4;
 }
 }
 if(5==5)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 FUN2(VAR3[VAR4].VAR5);
 FUN2(VAR3[VAR4].VAR6);
 }
 }
}
#endif
