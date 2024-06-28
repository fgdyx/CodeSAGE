#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 int VAR4;
 VAR4 = FUN2(VAR2, VAR5|VAR6, VAR7|VAR8);
 if (VAR4 != -1)
 {
 FUN3(VAR4);
 }
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR9[VAR10] = "";
 VAR2 = VAR9;
#ifdef VAR11
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 VAR3 = VAR2;
 FUN1();
}
void FUN5()
{
 FUN4();
}
#endif
