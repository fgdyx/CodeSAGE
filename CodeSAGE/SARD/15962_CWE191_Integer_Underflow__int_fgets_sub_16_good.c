#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = 0;
 while(1)
 {
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 }
 while(1)
 {
 if (VAR2 > VAR5)
 {
 int VAR6 = VAR2 - 1;
 FUN4(VAR6);
 }
 else
 {
 FUN3("");
 }
 break;
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = 0;
 while(1)
 {
 VAR2 = -2;
 break;
 }
 while(1)
 {
 {
 int VAR6 = VAR2 - 1;
 FUN4(VAR6);
 }
 break;
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
