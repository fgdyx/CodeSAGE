#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 char VAR4[VAR5] = "";
 VAR2 = VAR4;
#ifdef VAR6
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 {
 char * VAR2 = VAR3;
 {
 VAR7 *VAR8 = NULL;
 VAR8 = FUN2(VAR2, "");
 if (VAR8 != NULL)
 {
 fclose(VAR8);
 }
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
