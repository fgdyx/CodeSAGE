#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN2("", VAR3|VAR4, VAR5|VAR6);
 switch(5)
 {
 case 6:
 FUN3("");
 break;
 default:
 if (VAR2 != -1)
 {
 FUN4(VAR2);
 }
 break;
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN2("", VAR3|VAR4, VAR5|VAR6);
 switch(6)
 {
 case 6:
 if (VAR2 != -1)
 {
 FUN4(VAR2);
 }
 break;
 default:
 FUN3("");
 break;
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
