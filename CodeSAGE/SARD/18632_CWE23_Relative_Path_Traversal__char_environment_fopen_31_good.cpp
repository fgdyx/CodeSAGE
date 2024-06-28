#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 strcat(VAR2, "");
 {
 char * VAR6 = VAR2;
 char * VAR2 = VAR6;
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
