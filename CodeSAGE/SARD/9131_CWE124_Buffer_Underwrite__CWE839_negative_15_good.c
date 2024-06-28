#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 switch(6)
 {
 case 6:
 VAR2 = -5;
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
 {
 int VAR3;
 int VAR4[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR4[VAR2] = 1;
 for(VAR3 = 0; VAR3 < 10; VAR3++)
 {
 FUN3(VAR4[VAR3]);
 }
 }
 else
 {
 FUN2("");
 }
 }
 break;
 }
}
static void FUN4()
{
 int VAR2;
 VAR2 = -1;
 switch(6)
 {
 case 6:
 VAR2 = -5;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 {
 int VAR3;
 int VAR4[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR4[VAR2] = 1;
 for(VAR3 = 0; VAR3 < 10; VAR3++)
 {
 FUN3(VAR4[VAR3]);
 }
 }
 else
 {
 FUN2("");
 }
 }
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR2 = 7;
 break;
 }
 switch(7)
 {
 case 7:
 {
 int VAR3;
 int VAR4[10] = { 0 };
 if (VAR2 < 10)
 {
 VAR4[VAR2] = 1;
 for(VAR3 = 0; VAR3 < 10; VAR3++)
 {
 FUN3(VAR4[VAR3]);
 }
 }
 else
 {
 FUN2("");
 }
 }
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 switch(6)
 {
 case 6:
 VAR2 = 7;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 {
 int VAR3;
 int VAR4[10] = { 0 };
 if (VAR2 < 10)
 {
 VAR4[VAR2] = 1;
 for(VAR3 = 0; VAR3 < 10; VAR3++)
 {
 FUN3(VAR4[VAR3]);
 }
 }
 else
 {
 FUN2("");
 }
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
