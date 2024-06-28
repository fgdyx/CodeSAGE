#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(char * VAR5, ...)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 char VAR6[100] = "";
 va_list VAR7;
 FUN3(VAR7, VAR5);
 vsnprintf(VAR6, 100-1, "", VAR7);
 FUN4(VAR7);
 FUN2(VAR6);
 }
 }
}
static void FUN5()
{
 char * VAR5;
 char VAR8[100] = "";
 VAR5 = VAR8;
 {
 size_t VAR9 = strlen(VAR5);
 VAR10 * VAR11;
 if (100-VAR9 > 1)
 {
 VAR11 = fopen(VAR12, "");
 if (VAR11 != NULL)
 {
 if (fgets(VAR5+VAR9, (int)(100-VAR9), VAR11) == NULL)
 {
 FUN2("");
 VAR5[VAR9] = '';
 }
 fclose(VAR11);
 }
 }
 }
 VAR2 = 0;
 FUN1(VAR5, VAR5);
}
static void FUN6(char * VAR5, ...)
{
 if(VAR3)
 {
 {
 char VAR6[100] = "";
 va_list VAR7;
 FUN3(VAR7, VAR5);
 vsnprintf(VAR6, 100-1, "", VAR7);
 FUN4(VAR7);
 FUN2(VAR6);
 }
 }
}
static void FUN7()
{
 char * VAR5;
 char VAR8[100] = "";
 VAR5 = VAR8;
 {
 size_t VAR9 = strlen(VAR5);
 VAR10 * VAR11;
 if (100-VAR9 > 1)
 {
 VAR11 = fopen(VAR12, "");
 if (VAR11 != NULL)
 {
 if (fgets(VAR5+VAR9, (int)(100-VAR9), VAR11) == NULL)
 {
 FUN2("");
 VAR5[VAR9] = '';
 }
 fclose(VAR11);
 }
 }
 }
 VAR3 = 1;
 FUN6(VAR5, VAR5);
}
static void FUN8(char * VAR5, ...)
{
 if(VAR4)
 {
 {
 char VAR6[100] = "";
 va_list VAR7;
 FUN3(VAR7, VAR5);
 vsnprintf(VAR6, 100-1, VAR5, VAR7);
 FUN4(VAR7);
 FUN2(VAR6);
 }
 }
}
static void FUN9()
{
 char * VAR5;
 char VAR8[100] = "";
 VAR5 = VAR8;
 strcpy(VAR5, "");
 VAR4 = 1;
 FUN8(VAR5, VAR5);
}
void FUN10()
{
 FUN5();
 FUN7();
 FUN9();
}
#endif
