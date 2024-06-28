#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[10+1] = VAR4;
 memmove(VAR2, VAR3, (strlen(VAR3) + 1) * sizeof(char));
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR5[10];
 char VAR6[10+1];
 VAR2 = VAR6;
 VAR2[0] = '';
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
