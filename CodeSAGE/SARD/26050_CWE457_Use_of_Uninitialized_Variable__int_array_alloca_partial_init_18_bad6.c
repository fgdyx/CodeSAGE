#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = (int *)FUN2(10*sizeof(int));
 goto VAR3;
VAR3:
 /* POTENTIAL FLAW: Partially initialize data */
 {
 int VAR4;
 for(VAR4=0; VAR4<(10/2); VAR4++)
 {
 VAR2[VAR4] = VAR4;
 }
 }
 goto VAR5;
VAR5:
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR2[VAR4]);
 }
 }
}
#endif
