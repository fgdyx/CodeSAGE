#ifndef VAR1
void FUN1(size_t VAR2);
static void FUN2()
{
 size_t VAR2;
 void (*VAR3) (VAR4) = VAR5;
 VAR2 = 0;
 VAR2 = 20;
 FUN3(VAR2);
}
void FUN4(size_t VAR2);
static void FUN5()
{
 size_t VAR2;
 void (*VAR3) (VAR4) = VAR6;
 VAR2 = 0;
 {
 char VAR7[VAR8] = "";
 if (fgets(VAR7, VAR8, stdin) != NULL)
 {
 VAR2 = FUN6(VAR7, NULL, 0);
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
