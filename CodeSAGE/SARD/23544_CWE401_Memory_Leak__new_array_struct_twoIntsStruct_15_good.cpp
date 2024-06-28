#ifndef VAR1
static void FUN1()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 switch(6)
 {
 case 6:
 VAR3 = new struct VAR2[100];
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2((VAR6 *)&VAR3[0]);
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
 delete[] VAR3;
 break;
 }
}
static void FUN4()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 switch(6)
 {
 case 6:
 VAR3 = new struct VAR2[100];
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2((VAR6 *)&VAR3[0]);
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
 delete[] VAR3;
 break;
 default:
 FUN3("");
 break;
 }
}
static void FUN5()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 switch(5)
 {
 case 6:
 FUN3("");
 break;
 default:
 struct _twoIntsStruct VAR7[100];
 VAR3 = VAR7;
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2((VAR6 *)&VAR3[0]);
 break;
 }
 switch(7)
 {
 case 7:
 ;
 break;
 default:
 FUN3("");
 break;
 }
}
static void FUN6()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 switch(6)
 {
 case 6:
 struct _twoIntsStruct VAR7[100];
 VAR3 = VAR7;
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2((VAR6 *)&VAR3[0]);
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
 ;
 break;
 default:
 FUN3("");
 break;
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
