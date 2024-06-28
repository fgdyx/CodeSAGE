#ifndef VAR1
char * FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 VAR5 *VAR6 = NULL;
 VAR6 = FUN3(VAR2, "");
 if (VAR6 != NULL)
 {
 fclose(VAR6);
 }
 }
}
void FUN4()
{
 FUN2();
}
#endif
