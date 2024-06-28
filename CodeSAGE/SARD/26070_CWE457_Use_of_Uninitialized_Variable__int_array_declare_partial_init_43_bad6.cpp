#ifndef VAR1
static void FUN1(int * &VAR2)
{
 /* POTENTIAL FLAW: Partially initialize data */
 {
 int VAR3;
 for(VAR3=0; VAR3<(10/2); VAR3++)
 {
 VAR2[VAR3] = VAR3;
 }
 }
}
void FUN2()
{
 int * VAR2;
 int VAR4[10];
 VAR2 = VAR4;
 FUN1(VAR2);
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN3(VAR2[VAR3]);
 }
 }
}
#endif
