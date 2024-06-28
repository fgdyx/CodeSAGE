#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR2 = 100-1;
 break;
 }
 {
 char VAR3[100];
 char VAR4[100] = "";
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if (VAR2 < 100)
 {
 memmove(VAR4, VAR3, VAR2);
 VAR4[VAR2] = '';
 }
 FUN2(VAR4);
 }
}
static void FUN3()
{
 int VAR2;
 VAR2 = -1;
 switch(6)
 {
 case 6:
 VAR2 = 100-1;
 break;
 default:
 FUN2("");
 break;
 }
 {
 char VAR3[100];
 char VAR4[100] = "";
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if (VAR2 < 100)
 {
 memmove(VAR4, VAR3, VAR2);
 VAR4[VAR2] = '';
 }
 FUN2(VAR4);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
