#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[10];
 char VAR6[10+1];
 {
 char * VAR2 = *VAR3;
 VAR2 = VAR6;
 VAR2[0] = '';
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 char VAR7[10+1] = VAR8;
 strcpy(VAR2, VAR7);
 FUN2(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
