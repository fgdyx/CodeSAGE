#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(char * VAR5);
static void FUN2()
{
 char * VAR5;
 char VAR6[100] = "";
 VAR5 = VAR6;
 {
 size_t VAR7 = strlen(VAR5);
 if (100-VAR7 > 1)
 {
 if (fgets(VAR5+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = strlen(VAR5);
 if (VAR7 > 0 && VAR5[VAR7-1] == '')
 {
 VAR5[VAR7-1] = '';
 }
 }
 else
 {
 FUN3("");
 VAR5[VAR7] = '';
 }
 }
 }
 VAR2 = 0;
 FUN1(VAR5);
}
void FUN4(char * VAR5);
static void FUN5()
{
 char * VAR5;
 char VAR6[100] = "";
 VAR5 = VAR6;
 {
 size_t VAR7 = strlen(VAR5);
 if (100-VAR7 > 1)
 {
 if (fgets(VAR5+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = strlen(VAR5);
 if (VAR7 > 0 && VAR5[VAR7-1] == '')
 {
 VAR5[VAR7-1] = '';
 }
 }
 else
 {
 FUN3("");
 VAR5[VAR7] = '';
 }
 }
 }
 VAR3 = 1;
 FUN4(VAR5);
}
void FUN6(char * VAR5);
static void FUN7()
{
 char * VAR5;
 char VAR6[100] = "";
 VAR5 = VAR6;
 strcpy(VAR5, "");
 VAR4 = 1;
 FUN6(VAR5);
}
void FUN8()
{
 FUN2();
 FUN5();
 FUN7();
}
#endif
