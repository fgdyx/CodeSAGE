#ifndef VAR1
static void FUN1(char * &VAR2)
{
 strcpy(VAR2, "");
}
static void FUN2()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 FUN1(VAR2);
 FUN3(VAR2);
}
static void FUN4(char * &VAR2)
{
 {
 size_t VAR4 = strlen(VAR2);
 char * VAR5 = FUN5(VAR6);
 if (VAR5 != NULL)
 {
 strncat(VAR2+VAR4, VAR5, 100-VAR4-1);
 }
 }
}
static void FUN6()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 FUN4(VAR2);
 FUN3("", VAR2);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
