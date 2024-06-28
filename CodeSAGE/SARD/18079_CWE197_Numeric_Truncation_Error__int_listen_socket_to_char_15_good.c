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
 VAR2 = VAR3-5;
 break;
 }
 {
 char VAR4 = (char)VAR2;
 FUN3(VAR4);
 }
}
static void FUN4()
{
 int VAR2;
 VAR2 = -1;
 switch(6)
 {
 case 6:
 VAR2 = VAR3-5;
 break;
 default:
 FUN2("");
 break;
 }
 {
 char VAR4 = (char)VAR2;
 FUN3(VAR4);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
