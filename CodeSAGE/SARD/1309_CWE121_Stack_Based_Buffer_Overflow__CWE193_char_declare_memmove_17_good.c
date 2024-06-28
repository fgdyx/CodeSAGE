#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 char VAR4[10];
 char VAR5[10+1];
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = VAR5;
 VAR3[0] = '';
 }
 {
 char VAR6[10+1] = VAR7;
 memmove(VAR3, VAR6, (strlen(VAR6) + 1) * sizeof(char));
 FUN2(VAR3);
 }
}
void FUN3()
{
 FUN1();
}
#endif
