#ifndef VAR1
static char * FUN1(char * VAR2)
{
 {
 char * VAR3 = new char[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 return VAR2;
}
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 {
 size_t VAR4;
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR5[VAR4] = VAR2[VAR4];
 }
 VAR5[100-1] = '';
 FUN3(VAR5);
 }
}
void FUN4()
{
 FUN2();
}
#endif
