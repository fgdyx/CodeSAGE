#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 char * VAR2;
 void (*VAR4) (char *, ...) = VAR5;
 char VAR6[100] = "";
 VAR2 = VAR6;
 strcpy(VAR2, "");
 FUN6(VAR2);
}
static void FUN7(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3("", VAR3);
 FUN4(VAR3);
 }
}
static void FUN8()
{
 char * VAR2;
 void (*VAR4) (char *, ...) = VAR7;
 char VAR6[100] = "";
 VAR2 = VAR6;
 {
 size_t VAR8 = strlen(VAR2);
 VAR9 * VAR10;
 if (100-VAR8 > 1)
 {
 VAR10 = fopen(VAR11, "");
 if (VAR10 != NULL)
 {
 if (fgets(VAR2+VAR8, (int)(100-VAR8), VAR10) == NULL)
 {
 FUN9("");
 VAR2[VAR8] = '';
 }
 fclose(VAR10);
 }
 }
 }
 FUN6(VAR2);
}
void FUN10()
{
 FUN5();
 FUN8();
}
#endif
