#ifndef VAR1
void FUN1(VAR2 * VAR3);
static void FUN2()
{
 size_t VAR3;
 VAR3 = 0;
 VAR3 = 20;
 FUN1(&VAR3);
}
void FUN3(VAR2 * VAR3);
static void FUN4()
{
 size_t VAR3;
 VAR3 = 0;
 {
 char VAR4[VAR5] = "";
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR3 = FUN5(VAR4, NULL, 0);
 }
 else
 {
 FUN6("");
 }
 }
 FUN3(&VAR3);
}
void FUN7()
{
 FUN2();
 FUN4();
}
#endif
