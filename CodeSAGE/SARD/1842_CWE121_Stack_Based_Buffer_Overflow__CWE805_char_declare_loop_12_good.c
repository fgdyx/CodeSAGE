#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[50];
 char VAR4[100];
 if(FUN2())
 {
 VAR2 = VAR4;
 VAR2[0] = '';
 }
 else
 {
 VAR2 = VAR4;
 VAR2[0] = '';
 }
 {
 size_t VAR5;
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR2[VAR5] = VAR6[VAR5];
 }
 VAR2[100-1] = '';
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
