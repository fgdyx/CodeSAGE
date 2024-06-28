#ifndef VAR1
static void FUN1(char * &VAR2)
{
#ifdef VAR3
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
}
static void FUN2()
{
 char * VAR2;
 char VAR4[VAR5] = "";
 VAR2 = VAR4;
 FUN1(VAR2);
 {
 HANDLE VAR6;
 VAR6 = FUN3(VAR2,
 (VAR7|VAR8),
 0,
 NULL,
 VAR9,
 VAR10,
 NULL);
 if (VAR6 != VAR11)
 {
 FUN4(VAR6);
 }
 }
}
void FUN5()
{
 FUN2();
}
#endif
