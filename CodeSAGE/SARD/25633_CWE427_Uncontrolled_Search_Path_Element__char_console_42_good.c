#ifndef VAR1
static char * FUN1(char * VAR2)
{
 strcat(VAR2, VAR3);
 return VAR2;
}
static void FUN2()
{
 char * VAR2;
 char VAR4[250] = "";
 VAR2 = VAR4;
 VAR2 = FUN1(VAR2);
 FUN3(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
