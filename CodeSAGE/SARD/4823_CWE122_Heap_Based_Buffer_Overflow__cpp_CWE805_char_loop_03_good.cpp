#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = new char[100];
 VAR2[0] = '';
 }
 {
 size_t VAR3;
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 for (VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = VAR4[VAR3];
 }
 VAR2[100-1] = '';
 FUN2(VAR2);
 delete [] VAR2;
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 VAR2 = new char[100];
 VAR2[0] = '';
 }
 {
 size_t VAR3;
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 for (VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = VAR4[VAR3];
 }
 VAR2[100-1] = '';
 FUN2(VAR2);
 delete [] VAR2;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
