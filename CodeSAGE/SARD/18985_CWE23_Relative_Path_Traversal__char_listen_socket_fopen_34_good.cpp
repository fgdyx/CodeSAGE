#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 unionType VAR3;
 char VAR4[VAR5] = VAR6;
 VAR2 = VAR4;
 strcat(VAR2, "");
 VAR3.VAR7 = VAR2;
 {
 char * VAR2 = VAR3.VAR8;
 {
 VAR9 *VAR10 = NULL;
 VAR10 = FUN2(VAR2, "");
 if (VAR10 != NULL)
 {
 fclose(VAR10);
 }
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
