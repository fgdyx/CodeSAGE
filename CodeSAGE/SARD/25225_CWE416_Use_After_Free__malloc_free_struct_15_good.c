#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 switch(6)
 {
 case 6:
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4].VAR5 = 1;
 VAR3[VAR4].VAR6 = 2;
 }
 }
 free(VAR3);
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
 ;
 break;
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 switch(6)
 {
 case 6:
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4].VAR5 = 1;
 VAR3[VAR4].VAR6 = 2;
 }
 }
 free(VAR3);
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 ;
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4].VAR5 = 1;
 VAR3[VAR4].VAR6 = 2;
 }
 }
 break;
 }
 switch(7)
 {
 case 7:
 FUN5(&VAR3[0]);
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 switch(6)
 {
 case 6:
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4].VAR5 = 1;
 VAR3[VAR4].VAR6 = 2;
 }
 }
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 FUN5(&VAR3[0]);
 break;
 default:
 FUN2("");
 break;
 }
}
void FUN7()
{
 FUN1();
 FUN3();
 FUN4();
 FUN6();
}
#endif
