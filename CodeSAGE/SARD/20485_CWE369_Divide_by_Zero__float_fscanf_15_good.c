#ifndef VAR1
static void FUN1()
{
 float VAR2;
 VAR2 = 0.0F;
 switch(6)
 {
 case 6:
 fscanf (stdin, "", &VAR2);
 break;
 default:
 FUN2("");
 break;
 }
 switch(8)
 {
 case 7:
 FUN2("");
 break;
 default:
 if(FUN3(VAR2) > 0.000001)
 {
 int VAR3 = (int)(100.0 / VAR2);
 FUN4(VAR3);
 }
 else
 {
 FUN2("");
 }
 break;
 }
}
static void FUN5()
{
 float VAR2;
 VAR2 = 0.0F;
 switch(6)
 {
 case 6:
 fscanf (stdin, "", &VAR2);
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 if(FUN3(VAR2) > 0.000001)
 {
 int VAR3 = (int)(100.0 / VAR2);
 FUN4(VAR3);
 }
 else
 {
 FUN2("");
 }
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN6()
{
 float VAR2;
 VAR2 = 0.0F;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR2 = 2.0F;
 break;
 }
 switch(7)
 {
 case 7:
 {
 int VAR3 = (int)(100.0 / VAR2);
 FUN4(VAR3);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN7()
{
 float VAR2;
 VAR2 = 0.0F;
 switch(6)
 {
 case 6:
 VAR2 = 2.0F;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 {
 int VAR3 = (int)(100.0 / VAR2);
 FUN4(VAR3);
 }
 break;
 default:
 FUN2("");
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
