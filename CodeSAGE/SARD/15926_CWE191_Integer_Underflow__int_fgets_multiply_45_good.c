#ifndef VAR1
static void FUN1()
{
 int VAR2 = VAR3;
 if(VAR2 < 0)
 {
 int VAR4 = VAR2 * 2;
 FUN2(VAR4);
 }
}
static void FUN3()
{
 int VAR2;
 VAR2 = 0;
 VAR2 = -2;
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 int VAR2 = VAR5;
 if(VAR2 < 0)
 {
 if (VAR2 > (VAR6/2))
 {
 int VAR4 = VAR2 * 2;
 FUN2(VAR4);
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
 char VAR7[VAR8] = "";
 if (fgets(VAR7, VAR8, stdin) != NULL)
 {
 VAR2 = FUN7(VAR7);
 }
 else
 {
 FUN5("");
 }
 }
 VAR5 = VAR2;
 FUN4();
}
void FUN8()
{
 FUN3();
 FUN6();
}
#endif
