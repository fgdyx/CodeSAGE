#ifndef VAR1
void FUN1()
{
 int * VAR2;
 int VAR3[10];
 VAR2 = VAR3;
 if(VAR4==5)
 {
 /* POTENTIAL FLAW: Partially initialize data */
 {
 int VAR5;
 for(VAR5=0; VAR5<(10/2); VAR5++)
 {
 VAR2[VAR5] = VAR5;
 }
 }
 }
 if(VAR4==5)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN2(VAR2[VAR5]);
 }
 }
 }
}
#endif
