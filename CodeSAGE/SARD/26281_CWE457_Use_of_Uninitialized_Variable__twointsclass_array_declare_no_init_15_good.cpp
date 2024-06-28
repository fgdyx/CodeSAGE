#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 TwoIntsClass VAR4[10];
 VAR3 = VAR4;
 switch(6)
 {
 case 6:
 ;
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
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 FUN3(VAR3[VAR5].VAR6);
 FUN3(VAR3[VAR5].VAR7);
 }
 break;
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 TwoIntsClass VAR4[10];
 VAR3 = VAR4;
 switch(6)
 {
 case 6:
 ;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 FUN3(VAR3[VAR5].VAR6);
 FUN3(VAR3[VAR5].VAR7);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 TwoIntsClass VAR4[10];
 VAR3 = VAR4;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 break;
 }
 switch(7)
 {
 case 7:
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 FUN3(VAR3[VAR5].VAR6);
 FUN3(VAR3[VAR5].VAR7);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 TwoIntsClass VAR4[10];
 VAR3 = VAR4;
 switch(6)
 {
 case 6:
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 FUN3(VAR3[VAR5].VAR6);
 FUN3(VAR3[VAR5].VAR7);
 }
 break;
 default:
 FUN2("");
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
