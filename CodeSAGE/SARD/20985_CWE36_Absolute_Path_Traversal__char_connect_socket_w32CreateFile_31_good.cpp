#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
#ifdef VAR5
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 {
 char * VAR6 = VAR2;
 char * VAR2 = VAR6;
 {
 HANDLE VAR7;
 VAR7 = FUN2(VAR2,
 (VAR8|VAR9),
 0,
 NULL,
 VAR10,
 VAR11,
 NULL);
 if (VAR7 != VAR12)
 {
 FUN3(VAR7);
 }
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
