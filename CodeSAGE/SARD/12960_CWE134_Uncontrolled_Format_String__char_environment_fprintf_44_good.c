#ifndef VAR1
static void FUN1(char * VAR2)
{
 fprintf(VAR3, VAR2);
}
static void FUN2()
{
 char * VAR2;
 void (*VAR4) (char *) = VAR5;
 char VAR6[100] = "";
 VAR2 = VAR6;
 strcpy(VAR2, "");
 FUN3(VAR2);
}
static void FUN4(char * VAR2)
{
 fprintf(VAR3, "", VAR2);
}
static void FUN5()
{
 char * VAR2;
 void (*VAR4) (char *) = VAR7;
 char VAR6[100] = "";
 VAR2 = VAR6;
 {
 size_t VAR8 = strlen(VAR2);
 char * VAR9 = FUN6(VAR10);
 if (VAR9 != NULL)
 {
 strncat(VAR2+VAR8, VAR9, 100-VAR8-1);
 }
 }
 FUN3(VAR2);
}
void FUN7()
{
 FUN2();
 FUN5();
}
#endif
