#ifndef VAR1
void FUN1(char * &VAR2);
static void FUN2()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 VAR6 *VAR7 = NULL;
 VAR7 = FUN3(VAR2, "");
 if (VAR7 != NULL)
 {
 fclose(VAR7);
 }
 }
}
void FUN4()
{
 FUN2();
}
#endif
