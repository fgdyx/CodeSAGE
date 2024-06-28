#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 twoIntsStruct VAR4[10];
 VAR3 = VAR4;
 if(1)
 {
 /* POTENTIAL FLAW: Partially initialize data */
 {
 int VAR5;
 for(VAR5=0; VAR5<(10/2); VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 }
 }
 if(1)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN2(VAR3[VAR5].VAR6);
 FUN2(VAR3[VAR5].VAR7);
 }
 }
 }
}
#endif
