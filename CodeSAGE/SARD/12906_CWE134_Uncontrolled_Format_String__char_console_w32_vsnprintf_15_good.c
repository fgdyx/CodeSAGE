#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 char VAR3[100] = "";
 va_list VAR4;
 FUN2(VAR4, VAR2);
 vsnprintf(VAR3, 100-1, "", VAR4);
 FUN3(VAR4);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 switch(6)
 {
 case 6:
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
 FUN4("");
 VAR2[VAR6] = '';
 }
 }
 }
 break;
 default:
 FUN4("");
 break;
 }
 switch(8)
 {
 case 7:
 FUN4("");
 break;
 default:
 FUN1(VAR2, VAR2);
 break;
 }
}
static void FUN6(char * VAR2, ...)
{
 {
 char VAR3[100] = "";
 va_list VAR4;
 FUN2(VAR4, VAR2);
 vsnprintf(VAR3, 100-1, "", VAR4);
 FUN3(VAR4);
 FUN4(VAR3);
 }
}
static void FUN7()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 switch(6)
 {
 case 6:
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
 FUN4("");
 VAR2[VAR6] = '';
 }
 }
 }
 break;
 default:
 FUN4("");
 break;
 }
 switch(7)
 {
 case 7:
 FUN6(VAR2, VAR2);
 break;
 default:
 FUN4("");
 break;
 }
}
static void FUN8(char * VAR2, ...)
{
 {
 char VAR3[100] = "";
 va_list VAR4;
 FUN2(VAR4, VAR2);
 vsnprintf(VAR3, 100-1, VAR2, VAR4);
 FUN3(VAR4);
 FUN4(VAR3);
 }
}
static void FUN9()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 switch(5)
 {
 case 6:
 FUN4("");
 break;
 default:
 strcpy(VAR2, "");
 break;
 }
 switch(7)
 {
 case 7:
 FUN8(VAR2, VAR2);
 break;
 default:
 FUN4("");
 break;
 }
}
static void FUN10(char * VAR2, ...)
{
 {
 char VAR3[100] = "";
 va_list VAR4;
 FUN2(VAR4, VAR2);
 vsnprintf(VAR3, 100-1, VAR2, VAR4);
 FUN3(VAR4);
 FUN4(VAR3);
 }
}
static void FUN11()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 switch(6)
 {
 case 6:
 strcpy(VAR2, "");
 break;
 default:
 FUN4("");
 break;
 }
 switch(7)
 {
 case 7:
 FUN10(VAR2, VAR2);
 break;
 default:
 FUN4("");
 break;
 }
}
void FUN12()
{
 FUN9();
 FUN11();
 FUN5();
 FUN7();
}
#endif
