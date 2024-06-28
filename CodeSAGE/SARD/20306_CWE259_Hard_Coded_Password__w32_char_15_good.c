#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 {
 size_t VAR4 = 0;
 if (fgets(VAR2, 100, stdin) == NULL)
 {
 FUN2("");
 VAR2[0] = '';
 }
 VAR4 = strlen(VAR2);
 if (VAR4 > 0)
 {
 VAR2[VAR4-1] = '';
 }
 }
 break;
 }
 {
 HANDLE VAR5;
 char * VAR6 = "";
 char * VAR7 = "";
 if (FUN3(
 VAR6,
 VAR7,
 VAR2,
 VAR8,
 VAR9,
 &VAR5) != 0)
 {
 FUN2("");
 FUN4(VAR5);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 {
 size_t VAR4 = 0;
 if (fgets(VAR2, 100, stdin) == NULL)
 {
 FUN2("");
 VAR2[0] = '';
 }
 VAR4 = strlen(VAR2);
 if (VAR4 > 0)
 {
 VAR2[VAR4-1] = '';
 }
 }
 break;
 default:
 FUN2("");
 break;
 }
 {
 HANDLE VAR5;
 char * VAR6 = "";
 char * VAR7 = "";
 if (FUN3(
 VAR6,
 VAR7,
 VAR2,
 VAR8,
 VAR9,
 &VAR5) != 0)
 {
 FUN2("");
 FUN4(VAR5);
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
