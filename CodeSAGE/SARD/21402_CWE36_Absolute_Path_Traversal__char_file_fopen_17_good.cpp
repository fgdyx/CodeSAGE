#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 char VAR4[VAR5] = "";
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
#ifdef VAR6
 strcat(VAR3, "");
#else
 strcat(VAR3, "");
#endif
 }
 {
 VAR7 *VAR8 = NULL;
 VAR8 = FUN2(VAR3, "");
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
