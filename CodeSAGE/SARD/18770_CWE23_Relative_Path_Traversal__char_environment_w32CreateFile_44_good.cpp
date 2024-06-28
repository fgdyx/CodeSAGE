#ifndef VAR1
static void FUN1(char * VAR2)
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
 void (*VAR9) (char *) = VAR10;
 char VAR11[VAR12] = VAR13;
 VAR2 = VAR11;
 strcat(VAR2, "");
 FUN5(VAR2);
}
void FUN6()
{
 FUN4();
}
#endif
