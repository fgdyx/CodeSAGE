#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 VAR3 *VAR4 = NULL;
 VAR4 = FUN2(VAR2, "");
 if (VAR4 != NULL)
 {
 fclose(VAR4);
 }
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR5[VAR6] = "";
 VAR2 = VAR5;
#ifdef VAR7
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
