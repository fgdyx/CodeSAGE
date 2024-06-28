#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = new char[100];
 VAR3[0] = '';
 }
 {
 size_t VAR4;
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = VAR5[VAR4];
 }
 VAR3[100-1] = '';
 FUN2(VAR3);
 delete [] VAR3;
 }
}
void FUN3()
{
 FUN1();
}
#endif
