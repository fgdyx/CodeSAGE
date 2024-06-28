#ifndef VAR1
static void FUN1()
{
 double * VAR2;
 VAR2 = (double *)malloc(10*sizeof(double));
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
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = (double)VAR3;
 }
 }
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN3(VAR2[VAR3]);
 }
 }
 break;
 }
}
static void FUN4()
{
 double * VAR2;
 VAR2 = (double *)malloc(10*sizeof(double));
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
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = (double)VAR3;
 }
 }
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN3(VAR2[VAR3]);
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
 double * VAR2;
 VAR2 = (double *)malloc(10*sizeof(double));
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = (double)VAR3;
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
 FUN3(VAR2[VAR3]);
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
 double * VAR2;
 VAR2 = (double *)malloc(10*sizeof(double));
 switch(6)
 {
 case 6:
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = (double)VAR3;
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
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN3(VAR2[VAR3]);
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
