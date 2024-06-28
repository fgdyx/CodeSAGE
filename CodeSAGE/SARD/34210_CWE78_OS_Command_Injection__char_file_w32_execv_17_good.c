#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 char VAR4[100] = "";
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 strcat(VAR3, "");
 }
 {
 char *VAR5[] = {VAR6, VAR7, VAR8, VAR9, NULL};
 FUN2(VAR6, VAR5);
 }
}
void FUN3()
{
 FUN1();
}
#endif
