#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 char *VAR4[] = {VAR5, VAR6, VAR7, VAR8, NULL};
 FUN2(VAR9, VAR5, VAR4);
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR10[100] = "";
 VAR2 = VAR10;
 strcat(VAR2, "");
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
