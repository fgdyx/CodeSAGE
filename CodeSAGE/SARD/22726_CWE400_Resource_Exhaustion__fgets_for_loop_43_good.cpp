#ifndef VAR1
static void FUN1(int &VAR2)
{
 VAR2 = 20;
}
static void FUN2()
{
 int VAR2;
 VAR2 = -1;
 FUN1(VAR2);
 {
 size_t VAR3 = 0;
 for (VAR3 = 0; VAR3 < (VAR4)VAR2; VAR3++)
 {
 FUN3("");
 }
 }
}
static void FUN4(int &VAR2)
{
 {
 char VAR5[VAR6] = "";
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR2 = FUN5(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 FUN4(VAR2);
 {
 size_t VAR3 = 0;
 if (VAR2 > 0 && VAR2 <= 20)
 {
 for (VAR3 = 0; VAR3 < (VAR4)VAR2; VAR3++)
 {
 FUN3("");
 }
 }
 }
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
