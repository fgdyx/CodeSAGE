#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
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
 {
 int VAR5[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN4(VAR5[VAR2]);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 while(1)
 {
 VAR2 = 7;
 break;
 }
 while(1)
 {
 {
 int VAR5[10] = { 0 };
 if (VAR2 >= 0)
 {
 FUN4(VAR5[VAR2]);
 }
 else
 {
 FUN3("");
 }
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
