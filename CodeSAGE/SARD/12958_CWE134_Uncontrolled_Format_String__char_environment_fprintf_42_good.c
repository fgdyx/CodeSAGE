#ifndef VAR1
static char * FUN1(char * VAR2)
{
 strcpy(VAR2, "");
 return VAR2;
}
static void FUN2()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 fprintf(VAR4, VAR2);
}
static char * FUN3(char * VAR2)
{
 {
 size_t VAR5 = strlen(VAR2);
 char * VAR6 = FUN4(VAR7);
 if (VAR6 != NULL)
 {
 strncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 return VAR2;
}
static void FUN5()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 VAR2 = FUN3(VAR2);
 fprintf(VAR4, "", VAR2);
}
void FUN6()
{
 FUN5();
 FUN2();
}
#endif
