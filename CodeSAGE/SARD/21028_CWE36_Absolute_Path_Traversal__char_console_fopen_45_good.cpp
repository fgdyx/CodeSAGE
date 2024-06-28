#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 VAR4 *VAR5 = NULL;
 VAR5 = FUN2(VAR2, "");
 if (VAR5 != NULL)
 {
 fclose(VAR5);
 }
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR6[VAR7] = "";
 VAR2 = VAR6;
#ifdef VAR8
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
