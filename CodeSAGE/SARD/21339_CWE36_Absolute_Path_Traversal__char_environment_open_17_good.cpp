#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 char VAR4[VAR5] = "";
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
#ifdef VAR6
 strcat(VAR3, "");
#else
 strcat(VAR3, "");
#endif
 }
 {
 int VAR7;
 VAR7 = FUN2(VAR3, VAR8|VAR9, VAR10|VAR11);
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
