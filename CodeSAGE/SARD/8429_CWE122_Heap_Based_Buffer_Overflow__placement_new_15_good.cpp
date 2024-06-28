#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)malloc(sizeof(VAR4));
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 switch(6)
 {
 case 6:
 VAR2 = VAR3;
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
 VAR4 * VAR7 = new(VAR2) VAR4;
 VAR7->VAR8 = 5;
 FUN3(VAR7->VAR8);
 free(VAR2);
 }
 break;
 }
}
static void FUN4()
{
 char * VAR2;
 char * VAR3 = (char *)malloc(sizeof(VAR4));
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 switch(6)
 {
 case 6:
 VAR2 = VAR3;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 {
 VAR4 * VAR7 = new(VAR2) VAR4;
 VAR7->VAR8 = 5;
 FUN3(VAR7->VAR8);
 free(VAR2);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN5()
{
 char * VAR2;
 char * VAR3 = (char *)malloc(sizeof(VAR4));
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR2 = VAR5;
 break;
 }
 switch(7)
 {
 case 7:
 {
 VAR6 * VAR9 = new(VAR2) VAR6;
 VAR9->VAR8 = 5;
 classTwo->intTwo = 10;
 VAR9->VAR10 = 10;
 FUN3(VAR9->VAR8);
 free(VAR2);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN6()
{
 char * VAR2;
 char * VAR3 = (char *)malloc(sizeof(VAR4));
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 switch(6)
 {
 case 6:
 VAR2 = VAR5;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 {
 VAR6 * VAR9 = new(VAR2) VAR6;
 classTwo->intTwo = 10;
 VAR9->VAR8 = 5;
 VAR9->VAR10 = 10;
 FUN3(VAR9->VAR8);
 free(VAR2);
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
