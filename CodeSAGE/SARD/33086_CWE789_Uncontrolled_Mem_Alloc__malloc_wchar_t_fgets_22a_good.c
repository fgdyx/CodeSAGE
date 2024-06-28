#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(size_t VAR5);
static void FUN2()
{
 size_t VAR5;
 VAR5 = 0;
 {
 char VAR6[VAR7] = "";
 if (fgets(VAR6, VAR7, stdin) != NULL)
 {
 VAR5 = FUN3(VAR6, NULL, 0);
 }
 else
 {
 FUN4("");
 }
 }
 VAR2 = 0;
 FUN1(VAR5);
}
void FUN5(size_t VAR5);
static void FUN6()
{
 size_t VAR5;
 VAR5 = 0;
 {
 char VAR6[VAR7] = "";
 if (fgets(VAR6, VAR7, stdin) != NULL)
 {
 VAR5 = FUN3(VAR6, NULL, 0);
 }
 else
 {
 FUN4("");
 }
 }
 VAR3 = 1;
 FUN5(VAR5);
}
void FUN7(size_t VAR5);
static void FUN8()
{
 size_t VAR5;
 VAR5 = 0;
 VAR5 = 20;
 VAR4 = 1;
 FUN7(VAR5);
}
void FUN9()
{
 FUN2();
 FUN6();
 FUN8();
}
#endif
