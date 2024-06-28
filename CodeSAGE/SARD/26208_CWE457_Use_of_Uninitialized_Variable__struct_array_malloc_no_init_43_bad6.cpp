#ifndef VAR1
static void FUN1(VAR2 * &VAR3)
{
 /* POTENTIAL FLAW: Don't initialize data */
 ;
}
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = (VAR2 *)malloc(10*sizeof(VAR2));
 FUN1(VAR3);
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR3[VAR4].VAR5);
 FUN3(VAR3[VAR4].VAR6);
 }
 }
}
#endif
