#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[50];
 char VAR4[100];
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR2 = VAR4;
 VAR2[0] = '';
 break;
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
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR3[50];
 char VAR4[100];
 switch(6)
 {
 case 6:
 VAR2 = VAR4;
 VAR2[0] = '';
 break;
 default:
 FUN2("");
 break;
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
 FUN2(VAR2);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
