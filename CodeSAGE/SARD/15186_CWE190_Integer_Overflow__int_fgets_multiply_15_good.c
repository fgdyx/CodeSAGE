#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = 0;
 switch(6)
 {
 case 6:
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
 switch(8)
 {
 case 7:
 FUN3("");
 break;
 default:
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR5/2))
 {
 int VAR6 = VAR2 * 2;
 FUN4(VAR6);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = 0;
 switch(6)
 {
 case 6:
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR5/2))
 {
 int VAR6 = VAR2 * 2;
 FUN4(VAR6);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = 0;
 switch(5)
 {
 case 6:
 FUN3("");
 break;
 default:
 VAR2 = 2;
 break;
 }
 switch(7)
 {
 case 7:
 if(VAR2 > 0)
 {
 int VAR6 = VAR2 * 2;
 FUN4(VAR6);
 }
 break;
 default:
 FUN3("");
 break;
 }
}
static void FUN7()
{
 int VAR2;
 VAR2 = 0;
 switch(6)
 {
 case 6:
 VAR2 = 2;
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
 if(VAR2 > 0)
 {
 int VAR6 = VAR2 * 2;
 FUN4(VAR6);
 }
 break;
 default:
 FUN3("");
 break;
 }
}
void FUN8()
{
 FUN1();
 FUN5();
 FUN6();
 FUN7();
}
#endif
