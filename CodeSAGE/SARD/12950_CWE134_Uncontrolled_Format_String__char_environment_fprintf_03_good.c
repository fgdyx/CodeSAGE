#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(5==5)
 {
 {
 size_t VAR4 = strlen(VAR2);
 char * VAR5 = FUN2(VAR6);
 if (VAR5 != NULL)
 {
 strncat(VAR2+VAR4, VAR5, 100-VAR4-1);
 }
 }
 }
 if(5!=5)
 {
 FUN3("");
 }
 else
 {
 fprintf(VAR7, "", VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(5==5)
 {
 {
 size_t VAR4 = strlen(VAR2);
 char * VAR5 = FUN2(VAR6);
 if (VAR5 != NULL)
 {
 strncat(VAR2+VAR4, VAR5, 100-VAR4-1);
 }
 }
 }
 if(5==5)
 {
 fprintf(VAR7, "", VAR2);
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(5!=5)
 {
 FUN3("");
 }
 else
 {
 strcpy(VAR2, "");
 }
 if(5==5)
 {
 fprintf(VAR7, VAR2);
 }
}
static void FUN6()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(5==5)
 {
 strcpy(VAR2, "");
 }
 if(5==5)
 {
 fprintf(VAR7, VAR2);
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
