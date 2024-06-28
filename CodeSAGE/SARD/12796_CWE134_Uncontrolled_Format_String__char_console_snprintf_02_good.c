#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(1)
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
 FUN2("");
 VAR2[VAR4] = '';
 }
 }
 }
 }
 if(0)
 {
 FUN2("");
 }
 else
 {
 {
 char VAR5[100] = "";
 FUN3(VAR5, 100-1, "", VAR2);
 FUN2(VAR5);
 }
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(1)
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
 FUN2("");
 VAR2[VAR4] = '';
 }
 }
 }
 }
 if(1)
 {
 {
 char VAR5[100] = "";
 FUN3(VAR5, 100-1, "", VAR2);
 FUN2(VAR5);
 }
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(0)
 {
 FUN2("");
 }
 else
 {
 strcpy(VAR2, "");
 }
 if(1)
 {
 {
 char VAR5[100] = "";
 FUN3(VAR5, 100-1, VAR2);
 FUN2(VAR5);
 }
 }
}
static void FUN6()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(1)
 {
 strcpy(VAR2, "");
 }
 if(1)
 {
 {
 char VAR5[100] = "";
 FUN3(VAR5, 100-1, VAR2);
 FUN2(VAR5);
 }
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
