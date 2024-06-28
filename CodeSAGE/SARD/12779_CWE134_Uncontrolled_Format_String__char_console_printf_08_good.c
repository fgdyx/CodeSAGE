#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(FUN2())
 {
 {
 size_t VAR4 = strlen(VAR2);
 if (100-VAR4 > 1)
 {
 if (fgets(VAR2+VAR4, (int)(100-VAR4), stdin) != NULL)
 {
 VAR4 = strlen(VAR2);
 if (VAR4 > 0 && VAR2[VAR4-1] == '')
 {
 VAR2[VAR4-1] = '';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR4] = '';
 }
 }
 }
 }
 if(FUN4())
 {
 FUN3("");
 }
 else
 {
 FUN5("", VAR2);
 }
}
static void FUN6()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(FUN2())
 {
 {
 size_t VAR4 = strlen(VAR2);
 if (100-VAR4 > 1)
 {
 if (fgets(VAR2+VAR4, (int)(100-VAR4), stdin) != NULL)
 {
 VAR4 = strlen(VAR2);
 if (VAR4 > 0 && VAR2[VAR4-1] == '')
 {
 VAR2[VAR4-1] = '';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR4] = '';
 }
 }
 }
 }
 if(FUN2())
 {
 FUN5("", VAR2);
 }
}
static void FUN7()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(FUN4())
 {
 FUN3("");
 }
 else
 {
 strcpy(VAR2, "");
 }
 if(FUN2())
 {
 FUN5(VAR2);
 }
}
static void FUN8()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(FUN2())
 {
 strcpy(VAR2, "");
 }
 if(FUN2())
 {
 FUN5(VAR2);
 }
}
void FUN9()
{
 FUN1();
 FUN6();
 FUN7();
 FUN8();
}
#endif
