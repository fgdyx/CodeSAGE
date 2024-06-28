#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 FUN2(VAR4, VAR4, VAR5, VAR6, VAR7, NULL);
}
static void FUN3()
{
 char * VAR2;
 char VAR8[100] = "";
 VAR2 = VAR8;
 strcat(VAR2, "");
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
