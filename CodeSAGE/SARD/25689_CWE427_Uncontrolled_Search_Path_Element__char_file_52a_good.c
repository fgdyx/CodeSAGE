#ifndef VAR1
void FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 char VAR3[250] = "";
 VAR2 = VAR3;
 strcat(VAR2, VAR4);
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
