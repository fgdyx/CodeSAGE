#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = 0;
 VAR2 = 2;
 if(VAR2 > 0)
 {
 int VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
}
static void FUN3()
{
 int VAR2;
 VAR2 = 0;
 {
 char VAR4[VAR5] = "";
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN4(VAR4);
 }
 else
 {
 FUN5("");
 }
 }
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR6/2))
 {
 int VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
 else
 {
 FUN5("");
 }
 }
}
void FUN6()
{
 FUN1();
 FUN3();
}
#endif
