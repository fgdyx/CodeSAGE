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
 va_list VAR6;
 FUN3(VAR6, VAR5);
 FUN4(VAR7, "", VAR6);
 FUN5(VAR6);
 }
 }
}
static void FUN6()
{
 char * VAR5;
 char VAR8[100] = "";
 VAR5 = VAR8;
 {
 size_t VAR9 = strlen(VAR5);
 if (100-VAR9 > 1)
 {
 if (fgets(VAR5+VAR9, (int)(100-VAR9), stdin) != NULL)
 {
 VAR9 = strlen(VAR5);
 if (VAR9 > 0 && VAR5[VAR9-1] == '')
 {
 VAR5[VAR9-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR5[VAR9] = '';
 }
 }
 }
 VAR2 = 0;
 FUN1(VAR5, VAR5);
}
static void FUN7(char * VAR5, ...)
{
 if(VAR3)
 {
 {
 va_list VAR6;
 FUN3(VAR6, VAR5);
 FUN4(VAR7, "", VAR6);
 FUN5(VAR6);
 }
 }
}
static void FUN8()
{
 char * VAR5;
 char VAR8[100] = "";
 VAR5 = VAR8;
 {
 size_t VAR9 = strlen(VAR5);
 if (100-VAR9 > 1)
 {
 if (fgets(VAR5+VAR9, (int)(100-VAR9), stdin) != NULL)
 {
 VAR9 = strlen(VAR5);
 if (VAR9 > 0 && VAR5[VAR9-1] == '')
 {
 VAR5[VAR9-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR5[VAR9] = '';
 }
 }
 }
 VAR3 = 1;
 FUN7(VAR5, VAR5);
}
static void FUN9(char * VAR5, ...)
{
 if(VAR4)
 {
 {
 va_list VAR6;
 FUN3(VAR6, VAR5);
 FUN4(VAR7, VAR5, VAR6);
 FUN5(VAR6);
 }
 }
}
static void FUN10()
{
 char * VAR5;
 char VAR8[100] = "";
 VAR5 = VAR8;
 strcpy(VAR5, "");
 VAR4 = 1;
 FUN9(VAR5, VAR5);
}
void FUN11()
{
 FUN6();
 FUN8();
 FUN10();
}
#endif
