#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 strcat(VAR2, "");
 {
 char * VAR2 = VAR3;
 {
 char *VAR5[] = {VAR6, VAR7, VAR8, VAR9, NULL};
 FUN2(VAR10, VAR11, VAR5);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
