#ifndef VAR1
void FUN1(int VAR2);
static void FUN2()
{
 int VAR2;
 void (*VAR3) (int) = VAR4;
 VAR2 = -1;
 VAR2 = 20;
 FUN3(VAR2);
}
void FUN4(int VAR2);
static void FUN5()
{
 int VAR2;
 void (*VAR3) (int) = VAR5;
 VAR2 = -1;
 {
 char VAR6[VAR7] = "";
 if (fgets(VAR6, VAR7, stdin) != NULL)
 {
 VAR2 = FUN6(VAR6);
 }
 else
 {
 FUN7("");
 }
 }
 FUN3(VAR2);
}
void FUN8()
{
 FUN2();
 FUN5();
}
#endif
