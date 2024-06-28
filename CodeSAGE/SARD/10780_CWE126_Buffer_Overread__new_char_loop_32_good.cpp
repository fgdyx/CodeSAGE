#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 char * VAR2 = *VAR3;
 VAR2 = new char[100];
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 size_t VAR5, VAR6;
 char VAR7[100];
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 VAR6 = strlen(VAR7);
 for (VAR5 = 0; VAR5 < VAR6; VAR5++)
 {
 VAR7[VAR5] = VAR2[VAR5];
 }
 VAR7[100-1] = '';
 FUN2(VAR7);
 delete [] VAR2;
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
