#ifndef VAR1
void FUN1(char * VAR2[]);
static void FUN2()
{
 char * VAR3;
 char * VAR2[5];
 char VAR4[250] = "";
 VAR3 = VAR4;
 strcat(VAR3, VAR5);
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
