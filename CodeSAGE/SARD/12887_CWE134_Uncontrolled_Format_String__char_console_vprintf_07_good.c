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
 if(VAR5==5)
 {
 {
 size_t VAR6 = strlen(VAR2);
 if (100-VAR6 > 1)
 {
 if (fgets(VAR2+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = strlen(VAR2);
 if (VAR6 > 0 && VAR2[VAR6-1] == '')
 {
 VAR2[VAR6-1] = '';
 }
 }
 else
 {
 FUN6("");
 VAR2[VAR6] = '';
 }
 }
 }
 }
 if(VAR5!=5)
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
 FUN3("", VAR3);
 FUN4(VAR3);
 }
}
static void FUN8()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 if(VAR5==5)
 {
 {
 size_t VAR6 = strlen(VAR2);
 if (100-VAR6 > 1)
 {
 if (fgets(VAR2+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = strlen(VAR2);
 if (VAR6 > 0 && VAR2[VAR6-1] == '')
 {
 VAR2[VAR6-1] = '';
 }
 }
 else
 {
 FUN6("");
 VAR2[VAR6] = '';
 }
 }
 }
 }
 if(VAR5==5)
 {
 FUN7(VAR2, VAR2);
 }
}
static void FUN9(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN10()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 if(VAR5!=5)
 {
 FUN6("");
 }
 else
 {
 strcpy(VAR2, "");
 }
 if(VAR5==5)
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
 if(VAR5==5)
 {
 strcpy(VAR2, "");
 }
 if(VAR5==5)
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
