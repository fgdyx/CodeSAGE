#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 char * VAR2 = *VAR3;
 {
 char * VAR5 = (char *)malloc(100*sizeof(char));
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 VAR2 = VAR5;
 }
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 size_t VAR6;
 char VAR7[100];
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR7[VAR6] = VAR2[VAR6];
 }
 VAR7[100-1] = '';
 FUN2(VAR7);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
