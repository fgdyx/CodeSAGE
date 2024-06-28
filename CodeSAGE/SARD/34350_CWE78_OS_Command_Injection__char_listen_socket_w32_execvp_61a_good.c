#ifndef VAR1
char * FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 char *VAR4[] = {VAR5, VAR6, VAR7, VAR8, NULL};
 FUN3(VAR9, VAR4);
 }
}
void FUN4()
{
 FUN2();
}
#endif
