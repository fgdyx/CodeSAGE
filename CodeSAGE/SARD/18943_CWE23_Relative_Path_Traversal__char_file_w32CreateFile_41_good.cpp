#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 HANDLE VAR3;
 VAR3 = FUN2(VAR2,
 (VAR4|VAR5),
 0,
 NULL,
 VAR6,
 VAR7,
 NULL);
 if (VAR3 != VAR8)
 {
 FUN3(VAR3);
 }
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR9[VAR10] = VAR11;
 VAR2 = VAR9;
 strcat(VAR2, "");
 FUN1(VAR2);
}
void FUN5()
{
 FUN4();
}
#endif
