#ifndef VAR1
void FUN1(VAR2 * &VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = (VAR2 *)FUN3(10*sizeof(VAR2));
 FUN1(VAR3);
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN4(VAR3[VAR4].VAR5);
 FUN4(VAR3[VAR4].VAR6);
 }
 }
}
void FUN5(VAR2 * &VAR3);
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = (VAR2 *)FUN3(10*sizeof(VAR2));
 FUN5(VAR3);
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR3[VAR4].VAR5 = VAR4;
 VAR3[VAR4].VAR6 = VAR4;
 }
 }
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN4(VAR3[VAR4].VAR5);
 FUN4(VAR3[VAR4].VAR6);
 }
 }
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
