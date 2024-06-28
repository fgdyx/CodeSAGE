#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 goto VAR4;
VAR4:
 strcat(VAR2, "");
 FUN2(VAR5, VAR5, VAR6, VAR7, VAR8, NULL);
}
void FUN3()
{
 FUN1();
}
#endif
