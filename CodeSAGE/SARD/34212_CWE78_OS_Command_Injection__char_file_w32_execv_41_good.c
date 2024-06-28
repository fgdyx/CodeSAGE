#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char *VAR3[] = {VAR4, VAR5, VAR6, VAR7, NULL};
 FUN2(VAR4, VAR3);
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR8[100] = "";
 VAR2 = VAR8;
 strcat(VAR2, "");
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
