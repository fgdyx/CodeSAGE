#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 goto VAR5;
VAR5:
#ifdef VAR6
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 {
 int VAR7;
 VAR7 = FUN2(VAR2, VAR8|VAR9, VAR10|VAR11);
 if (VAR7 != -1)
 {
 FUN3(VAR7);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
