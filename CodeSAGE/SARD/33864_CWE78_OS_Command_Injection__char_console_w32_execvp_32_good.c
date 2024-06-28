#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 {
 char * VAR2 = *VAR3;
 strcat(VAR2, "");
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 char *VAR6[] = {VAR7, VAR8, VAR9, VAR10, NULL};
 FUN2(VAR11, VAR6);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
