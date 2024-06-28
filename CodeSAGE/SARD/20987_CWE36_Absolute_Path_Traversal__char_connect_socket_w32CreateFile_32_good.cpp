#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[VAR6] = "";
 VAR2 = VAR5;
 {
 char * VAR2 = *VAR3;
#ifdef VAR7
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 HANDLE VAR8;
 VAR8 = FUN2(VAR2,
 (VAR9|VAR10),
 0,
 NULL,
 VAR11,
 VAR12,
 NULL);
 if (VAR8 != VAR13)
 {
 FUN3(VAR8);
 }
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
