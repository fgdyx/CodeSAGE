#ifndef VAR1
static void FUN1()
{
 int VAR2;
 int *VAR3 = &VAR2;
 int *VAR4 = &VAR2;
 VAR2 = 0;
 {
 int VAR2 = *VAR3;
 VAR2 = -2;
 *VAR3 = VAR2;
 }
 {
 int VAR2 = *VAR4;
 if(VAR2 < 0)
 {
 int VAR5 = VAR2 * 2;
 FUN2(VAR5);
 }
 }
}
static void FUN3()
{
 int VAR2;
 int *VAR3 = &VAR2;
 int *VAR4 = &VAR2;
 VAR2 = 0;
 {
 int VAR2 = *VAR3;
 {
 char VAR6[VAR7] = "";
 if (fgets(VAR6, VAR7, stdin) != NULL)
 {
 VAR2 = FUN4(VAR6);
 }
 else
 {
 FUN5("");
 }
 }
 *VAR3 = VAR2;
 }
 {
 int VAR2 = *VAR4;
 if(VAR2 < 0)
 {
 if (VAR2 > (VAR8/2))
 {
 int VAR5 = VAR2 * 2;
 FUN2(VAR5);
 }
 else
 {
 FUN5("");
 }
 }
 }
}
void FUN6()
{
 FUN1();
 FUN3();
}
#endif
