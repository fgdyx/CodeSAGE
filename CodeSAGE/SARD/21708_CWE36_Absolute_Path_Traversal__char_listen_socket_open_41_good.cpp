#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 int VAR3;
 VAR3 = FUN2(VAR2, VAR4|VAR5, VAR6|VAR7);
 if (VAR3 != -1)
 {
 FUN3(VAR3);
 }
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR8[VAR9] = "";
 VAR2 = VAR8;
#ifdef VAR10
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 FUN1(VAR2);
}
void FUN5()
{
 FUN4();
}
#endif
