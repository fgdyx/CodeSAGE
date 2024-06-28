#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = (int *)calloc(100, sizeof(int));
 VAR2[0] = 5;
 FUN2(VAR2[0]);
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
 free(VAR2);
 break;
 }
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = (int *)calloc(100, sizeof(int));
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
 free(VAR2);
 break;
 default:
 FUN3("");
 break;
 }
}
static void FUN5()
{
 int * VAR2;
 VAR2 = NULL;
 switch(5)
 {
 case 6:
 FUN3("");
 break;
 default:
 VAR2 = (int *)FUN6(100*sizeof(int));
 VAR2[0] = 5;
 FUN2(VAR2[0]);
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
static void FUN7()
{
 int * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = (int *)FUN6(100*sizeof(int));
 VAR2[0] = 5;
 FUN2(VAR2[0]);
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
void FUN8()
{
 FUN1();
 FUN4();
 FUN5();
 FUN7();
}
#endif
