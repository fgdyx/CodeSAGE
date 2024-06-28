#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 strcat(VAR2, "");
 {
 char *VAR4[] = {VAR5, VAR6, VAR7, VAR8, NULL};
 FUN2(VAR9, VAR5, VAR4);
 }
}
void FUN3()
{
 FUN1();
}
#endif
