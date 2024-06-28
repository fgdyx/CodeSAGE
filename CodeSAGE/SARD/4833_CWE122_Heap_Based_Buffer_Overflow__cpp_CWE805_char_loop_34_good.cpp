#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 VAR2 = new char[100];
 VAR2[0] = '';
 VAR3.VAR4 = VAR2;
 {
 char * VAR2 = VAR3.VAR5;
 {
 size_t VAR6;
 char VAR7[100];
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR2[VAR6] = VAR7[VAR6];
 }
 VAR2[100-1] = '';
 FUN2(VAR2);
 delete [] VAR2;
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
