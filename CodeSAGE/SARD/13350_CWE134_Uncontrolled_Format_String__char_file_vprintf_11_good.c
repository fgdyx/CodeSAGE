#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3("", VAR3);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 if(FUN6())
 {
 {
 size_t VAR5 = strlen(VAR2);
 VAR6 * VAR7;
 if (100-VAR5 > 1)
 {
 VAR7 = fopen(VAR8, "");
 if (VAR7 != NULL)
 {
 if (fgets(VAR2+VAR5, (int)(100-VAR5), VAR7) == NULL)
 {
 FUN7("");
 VAR2[VAR5] = '';
 }
 fclose(VAR7);
 }
 }
 }
 }
 if(FUN8())
 {
 FUN7("");
 }
 else
 {
 FUN1(VAR2, VAR2);
 }
}
static void FUN9(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3("", VAR3);
 FUN4(VAR3);
 }
}
static void FUN10()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 if(FUN6())
 {
 {
 size_t VAR5 = strlen(VAR2);
 VAR6 * VAR7;
 if (100-VAR5 > 1)
 {
 VAR7 = fopen(VAR8, "");
 if (VAR7 != NULL)
 {
 if (fgets(VAR2+VAR5, (int)(100-VAR5), VAR7) == NULL)
 {
 FUN7("");
 VAR2[VAR5] = '';
 }
 fclose(VAR7);
 }
 }
 }
 }
 if(FUN6())
 {
 FUN9(VAR2, VAR2);
 }
}
static void FUN11(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN12()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 if(FUN8())
 {
 FUN7("");
 }
 else
 {
 strcpy(VAR2, "");
 }
 if(FUN6())
 {
 FUN11(VAR2, VAR2);
 }
}
static void FUN13(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN14()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 if(FUN6())
 {
 strcpy(VAR2, "");
 }
 if(FUN6())
 {
 FUN13(VAR2, VAR2);
 }
}
void FUN15()
{
 FUN12();
 FUN14();
 FUN5();
 FUN10();
}
#endif
