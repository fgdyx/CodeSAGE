#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 char *VAR3[] = {VAR4, VAR5, VAR6, VAR7, NULL};
 FUN2(VAR8, VAR9, VAR3);
 }
}
static void FUN3()
{
 char * VAR2;
 void (*VAR10) (char *) = VAR11;
 char VAR12[100] = "";
 VAR2 = VAR12;
 strcat(VAR2, "");
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
