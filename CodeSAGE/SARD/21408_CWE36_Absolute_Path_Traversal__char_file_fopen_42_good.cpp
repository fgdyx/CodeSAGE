#ifndef VAR1
static char * FUN1(char * VAR2)
{
#ifdef VAR3
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 return VAR2;
}
static void FUN2()
{
 char * VAR2;
 char VAR4[VAR5] = "";
 VAR2 = VAR4;
 VAR2 = FUN1(VAR2);
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
