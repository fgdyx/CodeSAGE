#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 TwoIntsClass VAR4[10];
 VAR3 = VAR4;
 if(VAR5==5)
 {
 /* POTENTIAL FLAW: Partially initialize data */
 for(int VAR6=0; VAR6<(10/2); VAR6++)
 {
 VAR3[VAR6].VAR7 = VAR6;
 VAR3[VAR6].VAR8 = VAR6;
 }
 }
 if(VAR5==5)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 for(int VAR6=0; VAR6<10; VAR6++)
 {
 FUN2(VAR3[VAR6].VAR7);
 FUN2(VAR3[VAR6].VAR8);
 }
 }
}
#endif
