#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = (int *)FUN2(10*sizeof(int));
 switch(6)
 {
 case 6:
 ;
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
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = VAR3;
 }
 }
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN4(VAR2[VAR3]);
 }
 }
 break;
 }
}
static void FUN5()
{
 int * VAR2;
 VAR2 = (int *)FUN2(10*sizeof(int));
 switch(6)
 {
 case 6:
 ;
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = VAR3;
 }
 }
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN4(VAR2[VAR3]);
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
 int * VAR2;
 VAR2 = (int *)FUN2(10*sizeof(int));
 switch(5)
 {
 case 6:
 FUN3("");
 break;
 default:
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = VAR3;
 }
 }
 break;
 }
 switch(7)
 {
 case 7:
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN4(VAR2[VAR3]);
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
}
static void FUN7()
{
 int * VAR2;
 VAR2 = (int *)FUN2(10*sizeof(int));
 switch(6)
 {
 case 6:
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = VAR3;
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
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN4(VAR2[VAR3]);
 }
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
