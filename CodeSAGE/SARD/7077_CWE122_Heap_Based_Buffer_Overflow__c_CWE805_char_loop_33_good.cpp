#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 VAR2 = NULL;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 {
 char * VAR2 = VAR3;
 {
 size_t VAR4;
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = VAR5[VAR4];
 }
 VAR2[100-1] = '';
 FUN2(VAR2);
 free(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
