#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 unionType VAR3;
 char VAR4[VAR5] = "";
 VAR2 = VAR4;
#ifdef VAR6
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 VAR3.VAR7 = VAR2;
 {
 char * VAR2 = VAR3.VAR8;
 {
 HANDLE VAR9;
 VAR9 = FUN2(VAR2,
 (VAR10|VAR11),
 0,
 NULL,
 VAR12,
 VAR13,
 NULL);
 if (VAR9 != VAR14)
 {
 FUN3(VAR9);
 }
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
