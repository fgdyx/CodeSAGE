#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(VAR4==5)
 {
 {
 size_t VAR5 = strlen(VAR2);
 char * VAR6 = FUN2(VAR7);
 if (VAR6 != NULL)
 {
 strncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 }
 if(VAR4!=5)
 {
 FUN3("");
 }
 else
 {
 FUN4("", VAR2);
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(VAR4==5)
 {
 {
 size_t VAR5 = strlen(VAR2);
 char * VAR6 = FUN2(VAR7);
 if (VAR6 != NULL)
 {
 strncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 }
 if(VAR4==5)
 {
 FUN4("", VAR2);
 }
}
static void FUN6()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(VAR4!=5)
 {
 FUN3("");
 }
 else
 {
 strcpy(VAR2, "");
 }
 if(VAR4==5)
 {
 FUN4(VAR2);
 }
}
static void FUN7()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(VAR4==5)
 {
 strcpy(VAR2, "");
 }
 if(VAR4==5)
 {
 FUN4(VAR2);
 }
}
void FUN8()
{
 FUN1();
 FUN5();
 FUN6();
 FUN7();
}
#endif
