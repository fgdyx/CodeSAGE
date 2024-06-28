#ifndef VAR1
void FUN1(char * &VAR2);
static void FUN2()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 HANDLE VAR5;
 VAR5 = FUN3(VAR2,
 (VAR6|VAR7),
 0,
 NULL,
 VAR8,
 VAR9,
 NULL);
 if (VAR5 != VAR10)
 {
 FUN4(VAR5);
 }
 }
}
void FUN5()
{
 FUN2();
}
#endif
