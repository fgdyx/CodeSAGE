#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 goto VAR5;
VAR5:
#ifdef VAR6
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 {
 VAR7 *VAR8 = NULL;
 VAR8 = FUN2(VAR2, "");
 if (VAR8 != NULL)
 {
 fclose(VAR8);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
