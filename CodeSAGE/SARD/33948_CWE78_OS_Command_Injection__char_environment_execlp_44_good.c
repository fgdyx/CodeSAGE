#ifndef VAR1
static void FUN1(char * VAR2)
{
 FUN2(VAR3, VAR3, VAR4, VAR5, VAR6, NULL);
}
static void FUN3()
{
 char * VAR2;
 void (*VAR7) (char *) = VAR8;
 char VAR9[100] = "";
 VAR2 = VAR9;
 strcat(VAR2, "");
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
