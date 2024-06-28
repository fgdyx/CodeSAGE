#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 TwoIntsClass VAR4[10];
 VAR3 = VAR4;
 if(5==5)
 {
 /* POTENTIAL FLAW: Partially initialize data */
 for(int VAR5=0; VAR5<(10/2); VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 }
 if(5==5)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 FUN2(VAR3[VAR5].VAR6);
 FUN2(VAR3[VAR5].VAR7);
 }
 }
}
#endif
