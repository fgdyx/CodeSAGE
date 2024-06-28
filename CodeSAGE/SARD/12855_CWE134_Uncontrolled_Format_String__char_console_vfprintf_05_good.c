#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, "", VAR3);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 if(VAR6)
 {
 {
 size_t VAR7 = strlen(VAR2);
 if (100-VAR7 > 1)
 {
 if (fgets(VAR2+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = strlen(VAR2);
 if (VAR7 > 0 && VAR2[VAR7-1] == '')
 {
 VAR2[VAR7-1] = '';
 }
 }
 else
 {
 FUN6("");
 VAR2[VAR7] = '';
 }
 }
 }
 }
 if(VAR8)
 {
 FUN6("");
 }
 else
 {
 FUN1(VAR2, VAR2);
 }
}
static void FUN7(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, "", VAR3);
 FUN4(VAR3);
 }
}
static void FUN8()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 if(VAR6)
 {
 {
 size_t VAR7 = strlen(VAR2);
 if (100-VAR7 > 1)
 {
 if (fgets(VAR2+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = strlen(VAR2);
 if (VAR7 > 0 && VAR2[VAR7-1] == '')
 {
 VAR2[VAR7-1] = '';
 }
 }
 else
 {
 FUN6("");
 VAR2[VAR7] = '';
 }
 }
 }
 }
 if(VAR6)
 {
 FUN7(VAR2, VAR2);
 }
}
static void FUN9(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN10()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 if(VAR8)
 {
 FUN6("");
 }
 else
 {
 strcpy(VAR2, "");
 }
 if(VAR6)
 {
 FUN9(VAR2, VAR2);
 }
}
static void FUN11(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN12()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 if(VAR6)
 {
 strcpy(VAR2, "");
 }
 if(VAR6)
 {
 FUN11(VAR2, VAR2);
 }
}
void FUN13()
{
 FUN10();
 FUN12();
 FUN5();
 FUN8();
}
#endif
