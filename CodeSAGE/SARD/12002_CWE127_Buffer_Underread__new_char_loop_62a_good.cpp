#ifndef VAR1
void FUN1(char * &VAR2);
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 size_t VAR3;
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 for (VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR4[VAR3] = VAR2[VAR3];
 }
 VAR4[100-1] = '';
 FUN3(VAR4);
 }
}
void FUN4()
{
 FUN2();
}
#endif
