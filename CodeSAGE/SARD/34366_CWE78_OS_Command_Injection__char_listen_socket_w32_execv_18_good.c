#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 goto VAR4;
VAR4:
 strcat(VAR2, "");
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
