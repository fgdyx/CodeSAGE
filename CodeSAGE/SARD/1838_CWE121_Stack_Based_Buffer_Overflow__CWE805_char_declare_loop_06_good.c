#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[50];
 char VAR4[100];
 if(VAR5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR4;
 VAR2[0] = '';
 }
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
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR3[50];
 char VAR4[100];
 if(VAR5==5)
 {
 VAR2 = VAR4;
 VAR2[0] = '';
 }
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
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
