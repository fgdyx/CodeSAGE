#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
char * FUN1(char * VAR4);
static void FUN2()
{
 char * VAR4;
 char VAR5[VAR6] = "";
 VAR4 = VAR5;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 VAR7 *VAR8 = NULL;
 VAR8 = FUN3(VAR4, "");
 if (VAR8 != NULL)
 {
 fclose(VAR8);
 }
 }
 ;
}
char * FUN4(char * VAR4);
static void FUN5()
{
 char * VAR4;
 char VAR5[VAR6] = "";
 VAR4 = VAR5;
 VAR3 = 1;
 VAR4 = FUN4(VAR4);
 {
 VAR7 *VAR8 = NULL;
 VAR8 = FUN3(VAR4, "");
 if (VAR8 != NULL)
 {
 fclose(VAR8);
 }
 }
 ;
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
