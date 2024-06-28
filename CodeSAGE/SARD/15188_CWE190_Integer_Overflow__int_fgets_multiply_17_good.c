#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 int VAR4;
 VAR4 = 0;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 char VAR5[VAR6] = "";
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR4 = FUN2(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 if(VAR4 > 0)
 {
 if (VAR4 < (VAR7/2))
 {
 int VAR8 = VAR4 * 2;
 FUN4(VAR8);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN5()
{
 int VAR9,VAR10;
 int VAR4;
 VAR4 = 0;
 for(VAR9 = 0; VAR9 < 1; VAR9++)
 {
 VAR4 = 2;
 }
 for(VAR10 = 0; VAR10 < 1; VAR10++)
 {
 if(VAR4 > 0)
 {
 int VAR8 = VAR4 * 2;
 FUN4(VAR8);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
