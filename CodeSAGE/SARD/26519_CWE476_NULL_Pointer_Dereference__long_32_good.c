#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 long * *VAR3 = &VAR2;
 long * *VAR4 = &VAR2;
 {
 long * VAR2 = *VAR3;
 {
 long VAR5 = 5L;
 VAR2 = &VAR5;
 }
 *VAR3 = VAR2;
 }
 {
 long * VAR2 = *VAR4;
 FUN2(*VAR2);
 }
}
static void FUN3()
{
 long * VAR2;
 long * *VAR3 = &VAR2;
 long * *VAR4 = &VAR2;
 {
 long * VAR2 = *VAR3;
 VAR2 = NULL;
 *VAR3 = VAR2;
 }
 {
 long * VAR2 = *VAR4;
 if (VAR2 != NULL)
 {
 FUN2(*VAR2);
 }
 else
 {
 FUN4("");
 }
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
