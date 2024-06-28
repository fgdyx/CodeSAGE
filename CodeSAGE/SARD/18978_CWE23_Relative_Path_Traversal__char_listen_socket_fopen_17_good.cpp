#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 char VAR4[VAR5] = VAR6;
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 strcat(VAR3, "");
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
