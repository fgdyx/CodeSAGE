#ifndef VAR1
void FUN1(char * VAR2)
{
 FUN2(VAR3, VAR3, VAR4, VAR5, VAR6, NULL);
}
static void FUN3()
{
 char * VAR2;
 char VAR7[100] = "";
 VAR2 = VAR7;
 strcat(VAR2, "");
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
