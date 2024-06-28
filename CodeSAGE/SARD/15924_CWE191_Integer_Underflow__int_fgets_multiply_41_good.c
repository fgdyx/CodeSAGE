#ifndef VAR1
static void FUN1(int VAR2)
{
 if(VAR2 < 0)
 {
 int VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
}
static void FUN3()
{
 int VAR2;
 VAR2 = 0;
 VAR2 = -2;
 FUN1(VAR2);
}
static void FUN4(int VAR2)
{
 if(VAR2 < 0)
 {
 if (VAR2 > (VAR4/2))
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
static void FUN6()
{
 int VAR2;
 VAR2 = 0;
 {
 char VAR5[VAR6] = "";
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR2 = FUN7(VAR5);
 }
 else
 {
 FUN5("");
 }
 }
 FUN4(VAR2);
}
void FUN8()
{
 FUN6();
 FUN3();
}
#endif
