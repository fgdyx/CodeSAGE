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
 int VAR6;
 VAR6 = FUN2(VAR2, VAR7|VAR8, VAR9|VAR10);
 if (VAR6 != -1)
 {
 FUN3(VAR6);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
