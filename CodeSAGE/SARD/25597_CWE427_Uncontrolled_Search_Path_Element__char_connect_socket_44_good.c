#ifndef VAR1
static void FUN1(char * VAR2)
{
 FUN2(VAR2);
}
static void FUN3()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 char VAR5[250] = "";
 VAR2 = VAR5;
 strcat(VAR2, VAR6);
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
